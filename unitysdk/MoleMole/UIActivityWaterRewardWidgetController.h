#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIActivityWaterRewardWidgetController_ERewardType.h"

class Class_1_D375C91CCE5D3999;
class Class_3_BD954AEAE8F1A57B;

#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_CANGETREWARD_OFFSET UNITYSDK_OFFSET(0x175920D0)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_GETREWARD_OFFSET UNITYSDK_OFFSET(0x17592170)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_JUMP_OFFSET UNITYSDK_OFFSET(0x17591EC0)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17591E80)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_SETTASK_OFFSET UNITYSDK_OFFSET(0x17591C90)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17592410)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER__GETREWARD_B__8_0_OFFSET UNITYSDK_OFFSET(0x17592420)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityWaterRewardWidgetController_TypeDefinitionIndex = 69413;

	class UIActivityWaterRewardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_3_BD954AEAE8F1A57B* _task; // 0x2F0
		::Class_1_D375C91CCE5D3999* _rootActivityData; // 0x2F8
		::MoleMole::UIActivityWaterRewardWidgetController_ERewardType _type; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetTask(::Class_3_BD954AEAE8F1A57B* task, ::Class_1_D375C91CCE5D3999* rootActivityData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_BD954AEAE8F1A57B*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_SETTASK_OFFSET))(this, task, rootActivityData);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void Jump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_JUMP_OFFSET))(this);
		}

		::System::Boolean CanGetReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_CANGETREWARD_OFFSET))(this);
		}

		::System::Void GetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_GETREWARD_OFFSET))(this);
		}

		::System::Void _GetReward_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER__GETREWARD_B__8_0_OFFSET))(this);
		}
	};
}
