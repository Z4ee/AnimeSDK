#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestSchedulePlanRowWidgetController_State_TypeDefinitionIndex = 71072;

	enum class UIDailyQuestSchedulePlanRowWidgetController_State : ::System::Int32
	{
		Invalid = 0,
		InProgress = 2,
		ToTakeReward = 3,
		Finished = 4,
		ToPlan = 1,
	};
}
