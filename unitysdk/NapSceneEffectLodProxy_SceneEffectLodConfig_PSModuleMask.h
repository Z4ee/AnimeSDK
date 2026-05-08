#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapSceneEffectLodProxy_SceneEffectLodConfig_PSModuleMask_TypeDefinitionIndex = 29546;

enum class NapSceneEffectLodProxy_SceneEffectLodConfig_PSModuleMask : ::System::Int32
{
	Noise = 1,
	SizeOverLifeTime = 2,
	ColorOverLifeTime = 4,
	Emission = 8,
	Shape = 16,
	RotationOverLifeTime = 32,
	Light = 64,
	TextureSheet = 128,
};
