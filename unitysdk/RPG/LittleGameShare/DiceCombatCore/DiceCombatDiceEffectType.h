#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatDiceEffectType_TypeDefinitionIndex = 34949;

	enum class DiceCombatDiceEffectType : ::System::Int32
	{
		None = 0,
		SamePointUpAtk = 1,
		AddRerollCount = 2,
	};
}
