#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int ECullReason_TypeDefinitionIndex = 76157;

	enum class ECullReason : ::System::Int32
	{
		DensityExcess = 2,
		ActiveCull = 0,
		Preempt = 1,
		ScoreRecovered = 3,
	};
}
