#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkDiffractionFlags_TypeDefinitionIndex = 41931;

enum class AkDiffractionFlags : ::System::Int32
{
	DiffractionFlags_UseBuiltInParam = 1,
	DiffractionFlags_UseObstruction = 2,
	DiffractionFlags_CalcEmitterVirtualPosition = 8,
	DefaultDiffractionFlags = 11,
};
