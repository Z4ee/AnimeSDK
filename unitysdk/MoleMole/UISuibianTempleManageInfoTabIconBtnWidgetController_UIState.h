#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABICONBTNWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11BBBFC0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABICONBTNWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x11BBC090)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoTabIconBtnWidgetController_UIState_TypeDefinitionIndex = 65339;

	class UISuibianTempleManageInfoTabIconBtnWidgetController_UIState : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::Boolean>* Lock; // 0x60
		::Class_0_16E4307DCC419505_165<::System::String*>* Icon; // 0x68
		::Class_0_16E4307DCC419505_165<::System::String*>* ProductName; // 0x70

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
