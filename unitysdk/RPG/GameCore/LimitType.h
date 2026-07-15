#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimitType_TypeDefinitionIndex = 14819;

	enum class LimitType : ::System::Int32
	{
		Null = 0,
		Level = 1,
		MainMission = 3,
		EventMission = 4,
		WorldLevel = 5,
		PreGoods = 6,
		HasNoRefreshGoods = 7,
		SubMission = 8,
		ItemNum = 9,
		EquipmentRankUpNum = 10,
		AvatarNum = 11,
		FinishQuest = 12,
		MinCurrencyRemain = 13,
		GiftLimit = 14,
		Gender = 15,
	};
}
