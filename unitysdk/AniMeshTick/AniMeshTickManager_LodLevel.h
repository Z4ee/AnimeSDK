#pragma once
#include "unitysdk/unitysdk.h"

namespace AniMeshTick
{
	inline static constexpr unsigned int AniMeshTickManager_LodLevel_TypeDefinitionIndex = 86036;

	enum class AniMeshTickManager_LodLevel : ::System::Int32
	{
		Far = 2,
		Fallback = 4,
		Near = 0,
		Medium = 1,
		VeryFar = 3,
	};
}
