#pragma once
#include "unitysdk/unitysdk.h"

namespace AniMeshTick
{
	inline static constexpr unsigned int AniMeshTickManager_LodLevel_TypeDefinitionIndex = 86577;

	enum class AniMeshTickManager_LodLevel : ::System::Int32
	{
		VeryFar = 3,
		Medium = 1,
		Fallback = 4,
		Far = 2,
		Near = 0,
	};
}
