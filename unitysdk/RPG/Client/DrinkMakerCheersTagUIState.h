#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersTagUIState_TypeDefinitionIndex = 60835;

	enum class DrinkMakerCheersTagUIState : ::System::Int32
	{
		Normal = 0,
		Correct = 1,
		Wrong = 2,
	};
}
