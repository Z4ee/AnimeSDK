#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformActorCreateType_TypeDefinitionIndex = 23877;

	enum class BattlePerformActorCreateType : ::System::Int32
	{
		Avatar = 0,
		Monster = 1,
		Servant = 2,
	};
}
