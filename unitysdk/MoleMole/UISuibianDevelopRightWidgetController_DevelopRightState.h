#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDevelopRightWidgetController_DevelopRightState_TypeDefinitionIndex = 77780;

	enum class UISuibianDevelopRightWidgetController_DevelopRightState : ::System::Int32
	{
		None = -1,
		ResearchEnough = 2,
		GoDispatch = 0,
		UpgradeEnough = 5,
		AlreadyResearchLevelUp = 7,
		AlreadyResearch = 6,
		UpgradePreUnResearch = 3,
		UpgradeNotEnough = 4,
		ResearchNotEnough = 1,
	};
}
