#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WheelItemType_TypeDefinitionIndex = 23943;

	enum class WheelItemType : ::System::Int32
	{
		None = 0,
		AvatarDetail = 1,
		TeamEdit = 2,
		MapGuide = 3,
		Inventory = 4,
		Mission = 5,
		BattlePass = 6,
		DailyMission = 7,
		Gacha = 8,
	};
}
