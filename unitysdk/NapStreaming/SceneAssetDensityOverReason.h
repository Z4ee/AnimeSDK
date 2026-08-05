#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int SceneAssetDensityOverReason_TypeDefinitionIndex = 50620;

	enum class SceneAssetDensityOverReason : ::System::Int32
	{
		TEXTURE_BITS = 1,
		LIGHT = 512,
		OBJECT = 256,
		PARTICLE = 16,
		RENDERER = 128,
		VERTEX = 8,
		MATERIAL = 4,
		ANIMATION_CLIP = 32,
		SKINNED_MESH = 64,
		NONE = 0,
		TEXTURE = 2,
	};
}
