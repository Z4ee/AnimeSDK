#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleProgressNodeState_TypeDefinitionIndex = 75919;

	enum class ChenLingBattleProgressNodeState : ::System::Int32
	{
		Invalid = 0,
		Done = 1,
		Doing = 2,
		ToDo = 3,
	};
}
