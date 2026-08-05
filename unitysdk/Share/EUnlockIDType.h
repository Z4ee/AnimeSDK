#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUnlockIDType_TypeDefinitionIndex = 15422;

	enum class EUnlockIDType : ::System::Int16
	{
		HollowItem = 4,
		Curse = 5,
		HollowCard = 1,
		HollowEvent = 3,
		HollowBuff = 2,
	};
}
