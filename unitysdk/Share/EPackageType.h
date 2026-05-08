#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPackageType_TypeDefinitionIndex = 15607;

	enum class EPackageType : ::System::Int16
	{
		DungeonAvatar = 4,
		Player = 3,
		RogueLike = 2,
		Fight = 1,
		EnumCount = 5,
	};
}
