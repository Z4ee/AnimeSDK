#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABBTNWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x12E36BA0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABBTNWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12E36C70)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoTabBtnWidgetController_UIState_TypeDefinitionIndex = 82614;

	class UISuibianTempleManageInfoTabBtnWidgetController_UIState : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC41950C_13<::System::String*>* ProductName; // 0x70
		::Class_0_16E4307DCC41950C_13<::System::String*>* Icon; // 0x78
		::Class_0_16E4307DCC41950C_13<::System::Boolean>* Lock; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABBTNWIDGETCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABBTNWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
