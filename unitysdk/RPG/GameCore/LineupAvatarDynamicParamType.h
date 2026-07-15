#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupAvatarDynamicParamType_TypeDefinitionIndex = 17394;

	enum class LineupAvatarDynamicParamType : ::System::Int32
	{
		SkillParam = 0,
		SkillTreeParam = 1,
		SkillEquip = 2,
		SkillRank = 3,
	};
}
