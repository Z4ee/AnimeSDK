#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIActivityWaterRewardWidgetController_ERewardType.h"

class Class_1_D375C91CCE5D3999;
class Class_3_AE02BC8285203464_18;

#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_CANGETREWARD_OFFSET UNITYSDK_OFFSET(0x193420C0)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_GETREWARD_OFFSET UNITYSDK_OFFSET(0x19342150)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_JUMP_OFFSET UNITYSDK_OFFSET(0x19341EB0)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19341E70)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_SETTASK_OFFSET UNITYSDK_OFFSET(0x19341C70)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x193423F0)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER__GETREWARD_B__8_0_OFFSET UNITYSDK_OFFSET(0x19342400)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityWaterRewardWidgetController_TypeDefinitionIndex = 60642;

	class UIActivityWaterRewardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_3_AE02BC8285203464_18* _task; // 0x2F0
		::Class_1_D375C91CCE5D3999* _rootActivityData; // 0x2F8
		::MoleMole::UIActivityWaterRewardWidgetController_ERewardType _type; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetTask(::Class_3_AE02BC8285203464_18* task, ::Class_1_D375C91CCE5D3999* rootActivityData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_18*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_SETTASK_OFFSET))(this, task, rootActivityData);
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
