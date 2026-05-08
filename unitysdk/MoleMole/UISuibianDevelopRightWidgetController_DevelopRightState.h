#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDevelopRightWidgetController_DevelopRightState_TypeDefinitionIndex = 75264;

	enum class UISuibianDevelopRightWidgetController_DevelopRightState : ::System::Int32
	{
		AlreadyResearchLevelUp = 7,
		None = -1,
		AlreadyResearch = 6,
		ResearchNotEnough = 1,
		ResearchEnough = 2,
		UpgradePreUnResearch = 3,
		UpgradeEnough = 5,
		GoDispatch = 0,
		UpgradeNotEnough = 4,
	};
}
