#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleSkillTag_TypeDefinitionIndex = 10206;

	enum class GridFightRoleSkillTag : ::System::Int32
	{
		Unknow = 0,
		DPS = 1,
		Healer = 2,
		Shield = 3,
		Assist = 4,
	};
}
