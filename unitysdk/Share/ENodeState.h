#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENodeState_TypeDefinitionIndex = 15014;

	enum class ENodeState : ::System::Int16
	{
		ShowEvent = 4,
		Unstable = 10,
		Guide = 7,
		BrightenOnlyVisible = 9,
		Unlocked = 2,
		Locked = 1,
		EnumCount = 12,
		Empty = 11,
		All = 0,
		Target = 8,
		Door = 5,
		Brighten = 6,
		Finished = 3,
	};
}
