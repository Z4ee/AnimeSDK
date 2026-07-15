#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LockHoyoGroupReason_TypeDefinitionIndex = 59323;

	enum class LockHoyoGroupReason : ::System::UInt32
	{
		EraFlipper = 0x0,
		Puzzle = 0x1,
		Performance = 0x2,
		Dialogue = 0x3,
		PerformanceLevelGraph = 0x4,
		MAX = 0x5,
	};
}
