#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionOptionType_TypeDefinitionIndex = 11414;

	enum class IdleLiveQuestionOptionType : ::System::Int32
	{
		None = 0,
		ShowSpEquipInventory = 1,
		ShowRecommendTeam = 2,
		ShowMessage = 3,
		ChangeLiveRoomIcon = 4,
	};
}
