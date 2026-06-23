#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int ECullReason_TypeDefinitionIndex = 70071;

	enum class ECullReason : ::System::Int32
	{
		DensityExcess = 2,
		ActiveCull = 0,
		ScoreRecovered = 3,
		Preempt = 1,
	};
}
