#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersStageType_TypeDefinitionIndex = 11998;

	enum class TeamTowersStageType : ::System::Int32
	{
		Invalid = 0,
		Normal = 1,
		Survival = 2,
		Race = 3,
		Endless = 4,
	};
}
