#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EnterBattleState_TypeDefinitionIndex = 61016;

	enum class EnterBattleState : ::System::Int32
	{
		EnterBattle = 1,
		Idle = 2,
		ExitBattle = 0,
		Unknown = 99,
	};
}
