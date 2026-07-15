#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSkillType_TypeDefinitionIndex = 13055;

	enum class GridFightSkillType : ::System::Int32
	{
		FrontSkill = 0,
		ServantSkill = 1,
		BESkill = 2,
	};
}
