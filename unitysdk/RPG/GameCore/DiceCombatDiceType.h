#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceType_TypeDefinitionIndex = 10186;

	enum class DiceCombatDiceType : ::System::Int32
	{
		D4 = 1,
		D6 = 2,
		D8 = 3,
		D12 = 4,
	};
}
