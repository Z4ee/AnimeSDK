#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleChangeType_TypeDefinitionIndex = 62271;

	enum class GridFightRoleChangeType : ::System::Int32
	{
		HeroPathChange = 0,
		HeroPathChangeToMemory = 1,
		RarityChange = 2,
		RoleChange = 3,
	};
}
