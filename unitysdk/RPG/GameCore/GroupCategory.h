#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupCategory_TypeDefinitionIndex = 16481;

	enum class GroupCategory : ::System::Int32
	{
		Normal = 0,
		Mission = 1,
		BattleProps = 2,
		BattleAudiences = 3,
		Custom = 4,
		System = 5,
		Atmosphere = 6,
	};
}
