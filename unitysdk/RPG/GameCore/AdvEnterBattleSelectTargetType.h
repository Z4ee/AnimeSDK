#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnterBattleSelectTargetType_TypeDefinitionIndex = 18483;

	enum class AdvEnterBattleSelectTargetType : ::System::Int32
	{
		Normal = 0,
		AllHitTarget = 1,
		FirstHitTarget = 2,
	};
}
