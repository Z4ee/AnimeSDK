#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGoodsType_TypeDefinitionIndex = 11579;

	enum class MonopolyGoodsType : ::System::Int32
	{
		None = 0,
		Buff = 1,
		Dice = 2,
		CheatDice = 3,
		ReRoll = 4,
	};
}
