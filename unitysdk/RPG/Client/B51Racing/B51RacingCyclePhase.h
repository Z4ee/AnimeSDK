#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCyclePhase_TypeDefinitionIndex = 80378;

	enum class B51RacingCyclePhase : ::System::Int32
	{
		InProgress = 0,
		Settled = 1,
	};
}
