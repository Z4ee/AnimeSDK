#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UISUIBIANTEMPLEDAILYPAPERDIALOGPOPWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13025A90)
#define MOLEMOLE_UISUIBIANTEMPLEDAILYPAPERDIALOGPOPWINDOWCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x13025BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleDailyPaperDialogPopWindowController_UIState_TypeDefinitionIndex = 74449;

	class UISuibianTempleDailyPaperDialogPopWindowController_UIState : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::Int32>* TotalSeconds; // 0x80
		::Class_0_16E4307DCC419505_159<::System::Int32>* CurrentBuff; // 0x88
		::Class_0_16E4307DCC419505_159<::System::Boolean>* NoPop; // 0x90
		::Class_0_16E4307DCC419505_159<::System::Int32>* CanGetCoin1; // 0x98
		::Class_0_16E4307DCC419505_159<::System::Int32>* CurrentCoin; // 0xA0
		::Class_0_16E4307DCC419505_159<::System::Int32>* CurrentPolicy; // 0xA8
		::Class_0_16E4307DCC419505_159<::System::Int32>* CanGetCoin2; // 0xB0
		::Class_0_16E4307DCC419505_159<::System::Int32>* TotalCoin; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDAILYPAPERDIALOGPOPWINDOWCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDAILYPAPERDIALOGPOPWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
