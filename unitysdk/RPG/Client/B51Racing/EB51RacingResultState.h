#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int EB51RacingResultState_TypeDefinitionIndex = 80355;

	enum class EB51RacingResultState : ::System::Int32
	{
		Win = 0,
		Lose = 1,
	};
}
