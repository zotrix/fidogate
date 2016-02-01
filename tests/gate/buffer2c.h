/*
 *
 *  buffer2c.h
 *
 *  January 30, 2016 Yauheni Kaliuta
 *
 */

#ifndef BUFFER_TO_C_H_
#define BUFFER_TO_C_H_

#include <stddef.h>

char *buffer2c(char *buf);
char *buffer2c_limit(char *buf, size_t limit);

#endif
