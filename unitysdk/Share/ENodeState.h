#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENodeState_TypeDefinitionIndex = 15872;

	enum class ENodeState : ::System::Int16
	{
		EnumCount = 12,
		Guide = 7,
		Unstable = 10,
		All = 0,
		Brighten = 6,
		Target = 8,
		Unlocked = 2,
		ShowEvent = 4,
		Locked = 1,
		Finished = 3,
		BrightenOnlyVisible = 9,
		Empty = 11,
		Door = 5,
	};
}
