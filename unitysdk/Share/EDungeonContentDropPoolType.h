#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EDungeonContentDropPoolType_TypeDefinitionIndex = 10549;

	enum class EDungeonContentDropPoolType : ::System::Byte
	{
		Blessing = 0x3,
		Reward = 0x5,
		HollowItem = 0x6,
		Arcana = 0x2,
		EnumCount = 0x7,
		Curse = 0x4,
		Card = 0x0,
		BaneCard = 0x1,
	};
}
