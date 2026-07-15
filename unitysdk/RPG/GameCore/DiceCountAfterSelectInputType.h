#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCountAfterSelectInputType_TypeDefinitionIndex = 15466;

	enum class DiceCountAfterSelectInputType : ::System::Int32
	{
		DiceWithResult = 0,
		DiceConfirmed = 1,
		LastReRoll = 2,
	};
}
