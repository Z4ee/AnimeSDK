#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAreaSwitchStatus_TypeDefinitionIndex = 23871;

	enum class BattleAreaSwitchStatus : ::System::Int32
	{
		Active = 0,
		Inactive = 1,
	};
}
