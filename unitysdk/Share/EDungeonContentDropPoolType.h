#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EDungeonContentDropPoolType_TypeDefinitionIndex = 18170;

	enum class EDungeonContentDropPoolType : ::System::Byte
	{
		EnumCount = 0x7,
		Curse = 0x4,
		HollowItem = 0x6,
		Reward = 0x5,
		BaneCard = 0x1,
		Blessing = 0x3,
		Card = 0x0,
		Arcana = 0x2,
	};
}
