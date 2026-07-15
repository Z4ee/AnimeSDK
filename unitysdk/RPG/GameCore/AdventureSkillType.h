#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillType_TypeDefinitionIndex = 16806;

	enum class AdventureSkillType : ::System::Int32
	{
		NormalAtk = 0,
		MazeSkill = 1,
		CustomSkill = 2,
		Unknown = 3,
	};
}
