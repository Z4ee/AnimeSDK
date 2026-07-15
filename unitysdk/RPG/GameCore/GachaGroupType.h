#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaGroupType_TypeDefinitionIndex = 12863;

	enum class GachaGroupType : ::System::Int32
	{
		Unknown = 0,
		MultiAvatarUp = 1,
		MultiWeaponUp = 2,
		Collaboration = 3,
	};
}
