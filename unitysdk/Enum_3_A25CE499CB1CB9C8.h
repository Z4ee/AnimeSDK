#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_A25CE499CB1CB9C8_TypeDefinitionIndex = 35194;

enum class Enum_3_A25CE499CB1CB9C8 : ::System::Int32
{
	SendOldValue = 8,
	SendEventOncePerFrame = 16,
	None = 0,
	SkipSameValueCheckAfterDirtyButBeforeChange = 32,
	SendOnBeforePropertyChange = 4,
	IgnoreSameValue = 2,
};
