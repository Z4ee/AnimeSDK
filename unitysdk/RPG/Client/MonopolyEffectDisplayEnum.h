#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyEffectDisplayEnum_TypeDefinitionIndex = 63286;

	enum class MonopolyEffectDisplayEnum : ::System::Int32
	{
		None = 0,
		AddCurrency = 1,
		ReduceCurrency = 2,
		AddDice = 3,
		AddCheatDice = 4,
		AddReRollItem = 5,
		AddBuff = 6,
	};
}
