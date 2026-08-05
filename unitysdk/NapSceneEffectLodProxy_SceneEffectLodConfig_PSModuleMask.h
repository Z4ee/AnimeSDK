#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapSceneEffectLodProxy_SceneEffectLodConfig_PSModuleMask_TypeDefinitionIndex = 27396;

enum class NapSceneEffectLodProxy_SceneEffectLodConfig_PSModuleMask : ::System::Int32
{
	Emission = 8,
	RotationOverLifeTime = 32,
	Noise = 1,
	TextureSheet = 128,
	Light = 64,
	Shape = 16,
	SizeOverLifeTime = 2,
	ColorOverLifeTime = 4,
};
