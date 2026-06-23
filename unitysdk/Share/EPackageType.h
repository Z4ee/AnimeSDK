#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPackageType_TypeDefinitionIndex = 17334;

	enum class EPackageType : ::System::Int16
	{
		EnumCount = 5,
		Player = 3,
		DungeonAvatar = 4,
		RogueLike = 2,
		Fight = 1,
	};
}
