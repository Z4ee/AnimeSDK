#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitHideMask_TypeDefinitionIndex = 54887;

	enum class SummonUnitHideMask : ::System::UInt32
	{
		Custom = 0x1,
		FollowSummoner = 0x2,
		Performance = 0x4,
		LockSource = 0x8,
		GroundCheck = 0x10,
		MapRotation = 0x20,
		PerformanceChangePlayer = 0x40,
		SyncDitherWithTarget = 0x400,
		AllHideMask = 0x3FF,
		AllShowMask = 0xFFC00,
	};
}
