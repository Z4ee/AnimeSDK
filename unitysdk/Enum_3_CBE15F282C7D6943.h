#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_CBE15F282C7D6943_TypeDefinitionIndex = 52568;

enum class Enum_3_CBE15F282C7D6943 : ::System::Byte
{
	TagUnderline = 0xD,
	Word = 0x2,
	NotInEnd = 0x20,
	Chars = 0x1,
	TAG_END = 0x12,
	TagItalic = 0x9,
	NotInHead = 0x40,
	LineBreak = 0x4,
	PLAIN_TOKEN_MASK = 0x1F,
	TagLink = 0xC,
	TagSize = 0xA,
	INVALID = 0xFF,
	NotInHeadIfAfterText = 0xC0,
	TagTextLink = 0xE,
	TagBold = 0x8,
	SpecialWord = 0x5,
	SPECIAL_MASK = 0x80,
	TAG_PAIRED_END = 0x10,
	Space = 0x0,
	Ignored = 0x3,
	NotInHead_NotInEnd = 0x60,
	TAG_BEGIN = 0x7,
	ChineseWord = 0x6,
	TAG_RIGHT_MASK = 0x80,
	TagColor = 0xB,
	TOKEN_MASK = 0x7F,
	NotInHeadIfAfterTextMask = 0x80,
	TagQuad = 0x11,
	TagMark = 0xF,
};
