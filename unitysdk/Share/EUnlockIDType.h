#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUnlockIDType_TypeDefinitionIndex = 10485;

	enum class EUnlockIDType : ::System::Int16
	{
		HollowBuff = 2,
		HollowEvent = 3,
		Curse = 5,
		HollowItem = 4,
		HollowCard = 1,
	};
}
