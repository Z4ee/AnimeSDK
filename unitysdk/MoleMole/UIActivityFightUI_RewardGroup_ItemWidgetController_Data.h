#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_369;

#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x152D0370)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFightUI_RewardGroup_ItemWidgetController_Data_TypeDefinitionIndex = 45490;

	class UIActivityFightUI_RewardGroup_ItemWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_369* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
