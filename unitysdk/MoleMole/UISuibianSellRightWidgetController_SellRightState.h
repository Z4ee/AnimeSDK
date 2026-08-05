#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianSellRightWidgetController_SellRightState_TypeDefinitionIndex = 58046;

	enum class UISuibianSellRightWidgetController_SellRightState : ::System::Int32
	{
		None = -1,
		DownShelve = 4,
		HasSameProductTypeInOtherShelve = 1,
		UpShelveEnough = 3,
		GoResearch = 0,
		UpShelveNotEnough = 2,
	};
}
