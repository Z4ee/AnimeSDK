#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaItemType_TypeDefinitionIndex = 12852;

	enum class GachaItemType : ::System::Int32
	{
		Unknown = 0,
		AvatarStar5 = 11,
		WeaponStar5 = 12,
		AvatarStar4 = 21,
		WeaponStar4 = 22,
		WeaponStar3 = 32,
	};
}
