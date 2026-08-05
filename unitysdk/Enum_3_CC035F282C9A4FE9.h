#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_CC035F282C9A4FE9_TypeDefinitionIndex = 64853;

enum class Enum_3_CC035F282C9A4FE9 : ::System::Byte
{
	TAG_RIGHT_MASK = 0x80,
	INVALID = 0xFF,
	TagBold = 0x8,
	TagRuby = 0x10,
	Space = 0x0,
	TAG_BEGIN = 0x7,
	SPECIAL_MASK = 0x80,
	NotInHeadIfAfterTextMask = 0x80,
	TagMark = 0xF,
	NotInHeadIfAfterText = 0xC0,
	NotInEnd = 0x20,
	ChineseWord = 0x6,
	TagRt = 0x11,
	TagUnderline = 0xD,
	TAG_PAIRED_END = 0x12,
	TagSize = 0xA,
	Ignored = 0x3,
	TOKEN_MASK = 0x7F,
	Word = 0x2,
	SpecialWord = 0x5,
	TagItalic = 0x9,
	TagLink = 0xC,
	Chars = 0x1,
	NotInHead = 0x40,
	NotInHead_NotInEnd = 0x60,
	TagQuad = 0x13,
	PLAIN_TOKEN_MASK = 0x1F,
	LineBreak = 0x4,
	TAG_END = 0x14,
	TagTextLink = 0xE,
	TagColor = 0xB,
};
