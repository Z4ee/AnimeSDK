#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUnlockIDType_TypeDefinitionIndex = 12680;

	enum class EUnlockIDType : ::System::Int16
	{
		HollowBuff = 2,
		Curse = 5,
		HollowEvent = 3,
		HollowItem = 4,
		HollowCard = 1,
	};
}
