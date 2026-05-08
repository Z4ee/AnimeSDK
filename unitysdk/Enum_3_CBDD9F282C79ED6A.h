#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_CBDD9F282C79ED6A_TypeDefinitionIndex = 59744;

enum class Enum_3_CBDD9F282C79ED6A : ::System::Byte
{
	PLAIN_TOKEN_MASK = 0x1F,
	INVALID = 0xFF,
	NotInHead_NotInEnd = 0x60,
	TagLink = 0xC,
	TAG_BEGIN = 0x7,
	Chars = 0x1,
	TOKEN_MASK = 0x7F,
	TagUnderline = 0xD,
	TagSize = 0xA,
	NotInHeadIfAfterTextMask = 0x80,
	NotInEnd = 0x20,
	TagColor = 0xB,
	TagItalic = 0x9,
	Space = 0x0,
	LineBreak = 0x4,
	SPECIAL_MASK = 0x80,
	TagBold = 0x8,
	TAG_PAIRED_END = 0xF,
	NotInHeadIfAfterText = 0xC0,
	SpecialWord = 0x5,
	NotInHead = 0x40,
	Ignored = 0x3,
	ChineseWord = 0x6,
	TagQuad = 0x10,
	Word = 0x2,
	TAG_END = 0x11,
	TagTextLink = 0xE,
	TAG_RIGHT_MASK = 0x80,
};
