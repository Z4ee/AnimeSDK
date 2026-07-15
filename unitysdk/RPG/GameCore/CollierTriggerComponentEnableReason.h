#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CollierTriggerComponentEnableReason_TypeDefinitionIndex = 54936;

	enum class CollierTriggerComponentEnableReason : ::System::Int32
	{
		Conflict = 0,
		ControlByOthers = 1,
		MapRotation = 2,
		GroupVisibility = 3,
		EraFlipDeviceControl = 4,
		FiveDim = 5,
		Puzzle = 6,
	};
}
