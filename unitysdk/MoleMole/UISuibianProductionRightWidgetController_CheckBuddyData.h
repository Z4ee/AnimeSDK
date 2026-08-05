#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISuibianProductionRightWidgetController_CheckBuddyDataType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianProductionRightWidgetController_CheckBuddyData_TypeDefinitionIndex = 45705;

	struct alignas(8) UISuibianProductionRightWidgetController_CheckBuddyData
	{
		::System::Action* action; // 0x10
		::MoleMole::UISuibianProductionRightWidgetController_CheckBuddyDataType type; // 0x18
	};
}
