#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENodeState_TypeDefinitionIndex = 15963;

	enum class ENodeState : ::System::Int16
	{
		Locked = 1,
		Unstable = 10,
		Empty = 11,
		Target = 8,
		Brighten = 6,
		All = 0,
		Door = 5,
		Finished = 3,
		ShowEvent = 4,
		BrightenOnlyVisible = 9,
		EnumCount = 12,
		Guide = 7,
		Unlocked = 2,
	};
}
