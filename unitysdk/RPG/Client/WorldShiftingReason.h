#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int WorldShiftingReason_TypeDefinitionIndex = 58220;

	enum class WorldShiftingReason : ::System::Int32
	{
		MapRotationReset = 0,
		MapRotation = 1,
	};
}
