#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_3C60E087B86D1AFF_TypeDefinitionIndex = 50909;

enum class Enum_3_3C60E087B86D1AFF : ::System::Int32
{
	AuthorityOnly = 1,
	MpAuthorityOnly = 5,
	NonAuthorityAllowed = 8,
	NonAuthorityOnly = 2,
	MpDefault = 4,
	MpNonAuthorityOnly = 6,
	Default = 0,
	MpTotallyLocal = 7,
	NotExecuted = 3,
};
