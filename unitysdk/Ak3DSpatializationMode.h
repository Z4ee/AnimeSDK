#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Ak3DSpatializationMode_TypeDefinitionIndex = 41908;

enum class Ak3DSpatializationMode : ::System::Int32
{
	AK_SpatializationMode_None = 0,
	AK_SpatializationMode_PositionOnly = 1,
	AK_SpatializationMode_PositionAndOrientation = 2,
};
