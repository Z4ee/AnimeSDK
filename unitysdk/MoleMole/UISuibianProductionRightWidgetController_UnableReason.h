#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianProductionRightWidgetController_UnableReason_TypeDefinitionIndex = 45714;

	enum class UISuibianProductionRightWidgetController_UnableReason : ::System::Int32
	{
		None = 0,
		UnResearch = 4,
		BuddyEnergyNotEnough = 2,
		MaterialNotEnough = 3,
		NeedBuddy = 1,
	};
}
