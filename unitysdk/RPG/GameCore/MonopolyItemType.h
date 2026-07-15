#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyItemType_TypeDefinitionIndex = 11560;

	enum class MonopolyItemType : ::System::Int32
	{
		None = 0,
		Buff = 1,
		CommonDice = 2,
		CheatDice = 3,
		ReRoll = 4,
	};
}
