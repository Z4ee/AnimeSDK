#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleSkillComeFrom_TypeDefinitionIndex = 13040;

	enum class GridFightRoleSkillComeFrom : ::System::Int32
	{
		FrontAvatar = 0,
		FrontServant = 1,
		Back = 2,
	};
}
