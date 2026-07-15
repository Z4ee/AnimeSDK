#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceValidTurnType_TypeDefinitionIndex = 10849;

	enum class DiceCombatDiceValidTurnType : ::System::Int32
	{
		All = 0,
		Attack = 1,
		Defense = 2,
	};
}
