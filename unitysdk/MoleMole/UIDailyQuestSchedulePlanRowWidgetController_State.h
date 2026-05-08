#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestSchedulePlanRowWidgetController_State_TypeDefinitionIndex = 41950;

	enum class UIDailyQuestSchedulePlanRowWidgetController_State : ::System::Int32
	{
		Finished = 4,
		InProgress = 2,
		Invalid = 0,
		ToPlan = 1,
		ToTakeReward = 3,
	};
}
