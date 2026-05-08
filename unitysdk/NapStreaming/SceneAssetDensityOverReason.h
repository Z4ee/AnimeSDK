#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int SceneAssetDensityOverReason_TypeDefinitionIndex = 42923;

	enum class SceneAssetDensityOverReason : ::System::Int32
	{
		ANIMATION_CLIP = 32,
		MATERIAL = 4,
		TEXTURE = 2,
		RENDERER = 128,
		OBJECT = 256,
		NONE = 0,
		PARTICLE = 16,
		LIGHT = 512,
		TEXTURE_BITS = 1,
		SKINNED_MESH = 64,
		VERTEX = 8,
	};
}
