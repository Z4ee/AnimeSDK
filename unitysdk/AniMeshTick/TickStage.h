#pragma once
#include "unitysdk/unitysdk.h"

namespace AniMeshTick
{
	inline static constexpr unsigned int TickStage_TypeDefinitionIndex = 71269;

	enum class TickStage : ::System::Int32
	{
		Update = 0,
		LateUpdate = 1,
		FixedUpdate = 2,
	};
}
