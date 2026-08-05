#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDevelopRightWidgetController_DevelopRightState_TypeDefinitionIndex = 76776;

	enum class UISuibianDevelopRightWidgetController_DevelopRightState : ::System::Int32
	{
		None = -1,
		AlreadyResearch = 6,
		GoDispatch = 0,
		ResearchEnough = 2,
		UpgradeNotEnough = 4,
		UpgradeEnough = 5,
		ResearchNotEnough = 1,
		AlreadyResearchLevelUp = 7,
		UpgradePreUnResearch = 3,
	};
}
