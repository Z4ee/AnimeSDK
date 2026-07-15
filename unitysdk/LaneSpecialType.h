#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LaneSpecialType_TypeDefinitionIndex = 45303;

enum class LaneSpecialType : ::System::Int32
{
	None = 0,
	Entry = 1,
	Exit = 2,
};
