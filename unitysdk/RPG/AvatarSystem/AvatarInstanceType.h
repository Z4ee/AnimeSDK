#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int AvatarInstanceType_TypeDefinitionIndex = 49529;

	enum class AvatarInstanceType : ::System::Int32
	{
		None = 0,
		Obtained = 1,
		ActivePath = 2,
		SpecificPath = 3,
		FixedPath = 4,
		Trial = 5,
		PlayerReturnTrial = 6,
		Assistant = 7,
		Friend = 8,
		Upgrade = 9,
		Preview = 10,
		AdvPlayer = 11,
		FateRin = 12,
	};
}
