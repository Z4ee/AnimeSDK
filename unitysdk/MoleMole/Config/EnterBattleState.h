#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EnterBattleState_TypeDefinitionIndex = 60395;

	enum class EnterBattleState : ::System::Int32
	{
		EnterBattle = 1,
		Unknown = 99,
		Idle = 2,
		ExitBattle = 0,
	};
}
