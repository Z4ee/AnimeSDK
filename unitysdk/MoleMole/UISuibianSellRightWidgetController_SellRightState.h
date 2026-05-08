#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianSellRightWidgetController_SellRightState_TypeDefinitionIndex = 39820;

	enum class UISuibianSellRightWidgetController_SellRightState : ::System::Int32
	{
		GoResearch = 0,
		UpShelveEnough = 3,
		HasSameProductTypeInOtherShelve = 1,
		None = -1,
		DownShelve = 4,
		UpShelveNotEnough = 2,
	};
}
