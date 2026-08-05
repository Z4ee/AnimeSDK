#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EDungeonContentDropPoolType_TypeDefinitionIndex = 13540;

	enum class EDungeonContentDropPoolType : ::System::Byte
	{
		Reward = 0x5,
		BaneCard = 0x1,
		Curse = 0x4,
		HollowItem = 0x6,
		Card = 0x0,
		Arcana = 0x2,
		Blessing = 0x3,
		EnumCount = 0x7,
	};
}
