#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CAE10C54ABAE6FAF.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideBottomTabRowWidgetController_ScoreSortItem_TypeDefinitionIndex = 53105;

	struct alignas(4) UINewbieGuideBottomTabRowWidgetController_ScoreSortItem
	{
		::Enum_3_CAE10C54ABAE6FAF ScoreLevel; // 0x10
		::System::Single Score; // 0x14
		::System::Boolean IsSort; // 0x18
		::System::Int32 OriginalIndex; // 0x1C
	};
}
