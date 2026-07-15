#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int HipplenBuilderStatus_StatType_TypeDefinitionIndex = 45418;

enum class HipplenBuilderStatus_StatType : ::System::Int32
{
	Health = 0,
	Food = 1,
	Hygiene = 2,
	Strength = 3,
	Reflex = 4,
	Intelligence = 5,
	PersonalityA = 6,
	PersonalityB = 7,
	Gold = 8,
};
