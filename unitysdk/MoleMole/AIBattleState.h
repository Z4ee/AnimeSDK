#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AIBattleState_TypeDefinitionIndex = 43461;

	enum class AIBattleState : ::System::Int32
	{
		BattleState = 2,
		DieState = 3,
		BornState = 1,
		None = 0,
	};
}
