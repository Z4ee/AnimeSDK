#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIActivityFightUI_RewardGroup_ItemWidgetController_Data; }

#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173230E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFightUI_RewardGroup_ItemWidgetController_Context_TypeDefinitionIndex = 80518;

	class UIActivityFightUI_RewardGroup_ItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIActivityFightUI_RewardGroup_ItemWidgetController_Data* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
