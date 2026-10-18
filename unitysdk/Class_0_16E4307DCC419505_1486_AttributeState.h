#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_0_16E4307DCC419505_1486_AttributeState_TypeDefinitionIndex = 79414;

enum class Class_0_16E4307DCC419505_1486_AttributeState : ::System::Int32
{
	NonTargetDefault = 0,
	NonTargetWronglyPeaked = 1,
	NonTargetAboveMaxLevel = 2,
	TargetNotReached = 3,
	TargetJustReached = 4,
	TargetMoreThanEnough = 5,
	TargetAboveMaxLevel = 6,
};
