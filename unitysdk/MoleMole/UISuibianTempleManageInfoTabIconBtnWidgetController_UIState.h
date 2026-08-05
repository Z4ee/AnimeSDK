#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABICONBTNWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x151213B0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABICONBTNWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15121480)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoTabIconBtnWidgetController_UIState_TypeDefinitionIndex = 86608;

	class UISuibianTempleManageInfoTabIconBtnWidgetController_UIState : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::String*>* ProductName; // 0x80
		::Class_0_16E4307DCC419505_159<::System::Boolean>* Lock; // 0x88
		::Class_0_16E4307DCC419505_159<::System::String*>* Icon; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABICONBTNWIDGETCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABICONBTNWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
