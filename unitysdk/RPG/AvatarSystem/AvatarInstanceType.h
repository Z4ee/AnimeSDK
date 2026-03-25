#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int AvatarInstanceType_TypeDefinitionIndex = 41942;

	enum class AvatarInstanceType : ::System::Int32
	{
		None = 0,
		CurrentPath = 1,
		SpecificPath = 2,
		FixedPath = 3,
		Trial = 4,
		Assist = 5,
		Friend = 6,
		Upgrade = 7,
		Preview = 8,
	};
}
