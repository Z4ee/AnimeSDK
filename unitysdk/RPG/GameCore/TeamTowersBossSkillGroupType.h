#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersBossSkillGroupType_TypeDefinitionIndex = 12411;

	enum class TeamTowersBossSkillGroupType : ::System::Int32
	{
		Invalid = 0,
		Sequence = 1,
		Random = 2,
	};
}
