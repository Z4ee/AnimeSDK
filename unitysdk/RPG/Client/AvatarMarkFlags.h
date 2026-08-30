#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarMarkFlags_TypeDefinitionIndex = 60230;

	enum class AvatarMarkFlags : ::System::Int32
	{
		None = 0,
		Team = 1,
		Favorite = 2,
		Upgrade = 4,
		Fixed = 8,
		Assist = 16,
		GrowthTarget = 32,
		Replace = 64,
	};
}
