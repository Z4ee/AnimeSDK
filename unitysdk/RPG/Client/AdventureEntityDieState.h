#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureEntityDieState_TypeDefinitionIndex = 57444;

	enum class AdventureEntityDieState : ::System::Int32
	{
		DieAnimation = 0,
		DelayAfterAnimation = 1,
		Finish = 2,
	};
}
