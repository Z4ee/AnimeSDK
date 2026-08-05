#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestSchedulePlanRowWidgetController_State_TypeDefinitionIndex = 80593;

	enum class UIDailyQuestSchedulePlanRowWidgetController_State : ::System::Int32
	{
		ToTakeReward = 3,
		ToPlan = 1,
		Finished = 4,
		Invalid = 0,
		InProgress = 2,
	};
}
