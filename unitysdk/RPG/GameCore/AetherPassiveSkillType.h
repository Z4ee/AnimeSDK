#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherPassiveSkillType_TypeDefinitionIndex = 10545;

	enum class AetherPassiveSkillType : ::System::Int32
	{
		Defend = 0,
		Assist = 1,
		Storm = 2,
		Trick = 3,
	};
}
