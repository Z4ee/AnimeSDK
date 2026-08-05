#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPackageType_TypeDefinitionIndex = 11092;

	enum class EPackageType : ::System::Int16
	{
		RogueLike = 2,
		Fight = 1,
		Player = 3,
		EnumCount = 5,
		DungeonAvatar = 4,
	};
}
