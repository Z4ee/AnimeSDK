#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleSkillTokenType_TypeDefinitionIndex = 51774;

	enum class RtBattleSkillTokenType : ::System::Int32
	{
		None = 0,
		MoveInSkill = 1,
		ExclusivePerform = 2,
	};
}
