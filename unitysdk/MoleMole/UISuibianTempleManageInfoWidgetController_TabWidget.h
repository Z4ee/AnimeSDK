#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISuibianTempleManageInfoTabIconBtnWidgetController; }

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_TabWidget_TypeDefinitionIndex = 58305;

	struct alignas(8) UISuibianTempleManageInfoWidgetController_TabWidget
	{
		::MoleMole::UISuibianTempleManageInfoTabIconBtnWidgetController* widget; // 0x10
		::System::Int32 type; // 0x18
		::System::Int32 index; // 0x1C
	};
}
