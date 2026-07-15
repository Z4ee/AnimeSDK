#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags_TypeDefinitionIndex = 42036;

enum class AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags : ::System::Int32
{
	UseBuiltInParam = 1,
	UseObstruction = 2,
	CalcEmitterVirtualPosition = 8,
};
