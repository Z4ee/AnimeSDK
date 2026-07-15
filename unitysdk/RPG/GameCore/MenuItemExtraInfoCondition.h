#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MenuItemExtraInfoCondition_TypeDefinitionIndex = 10156;

	enum class MenuItemExtraInfoCondition : ::System::Int32
	{
		None = 0,
		PamLevelReward = 1,
		TrackMission = 2,
		ActivityReward = 3,
	};
}
