#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int SceneAssetDensityOverReason_TypeDefinitionIndex = 82594;

	enum class SceneAssetDensityOverReason : ::System::Int32
	{
		RENDERER = 128,
		SKINNED_MESH = 64,
		OBJECT = 256,
		VERTEX = 8,
		NONE = 0,
		LIGHT = 512,
		PARTICLE = 16,
		MATERIAL = 4,
		TEXTURE_BITS = 1,
		TEXTURE = 2,
		ANIMATION_CLIP = 32,
	};
}
