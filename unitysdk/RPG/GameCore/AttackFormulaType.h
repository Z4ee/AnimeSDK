#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttackFormulaType_TypeDefinitionIndex = 23865;

	enum class AttackFormulaType : ::System::Int32
	{
		Unknown = 0,
		ByAttack = 1,
		ByDefence = 2,
		ByMaxHP = 3,
		ByCurrentHP = 4,
		ByDefenderMaxHP = 5,
		ByDefenderCurrentHP = 6,
		ByBreakDamage = 7,
		BySummonerMaxHP = 8,
		ByElationDamage = 9,
	};
}
