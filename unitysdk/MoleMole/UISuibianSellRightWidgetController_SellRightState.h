#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianSellRightWidgetController_SellRightState_TypeDefinitionIndex = 81707;

	enum class UISuibianSellRightWidgetController_SellRightState : ::System::Int32
	{
		DownShelve = 4,
		UpShelveEnough = 3,
		GoResearch = 0,
		HasSameProductTypeInOtherShelve = 1,
		UpShelveNotEnough = 2,
		None = -1,
	};
}
