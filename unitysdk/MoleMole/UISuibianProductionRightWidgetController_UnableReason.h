#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianProductionRightWidgetController_UnableReason_TypeDefinitionIndex = 72763;

	enum class UISuibianProductionRightWidgetController_UnableReason : ::System::Int32
	{
		UnResearch = 4,
		NeedBuddy = 1,
		MaterialNotEnough = 3,
		BuddyEnergyNotEnough = 2,
		None = 0,
	};
}
