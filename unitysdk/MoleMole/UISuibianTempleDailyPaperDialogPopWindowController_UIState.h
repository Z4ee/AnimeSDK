#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UISUIBIANTEMPLEDAILYPAPERDIALOGPOPWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x10885CF0)
#define MOLEMOLE_UISUIBIANTEMPLEDAILYPAPERDIALOGPOPWINDOWCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10885E30)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleDailyPaperDialogPopWindowController_UIState_TypeDefinitionIndex = 54549;

	class UISuibianTempleDailyPaperDialogPopWindowController_UIState : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::Int32>* CurrentPolicy; // 0x60
		::Class_0_16E4307DCC419505_165<::System::Int32>* CanGetCoin2; // 0x68
		::Class_0_16E4307DCC419505_165<::System::Int32>* CurrentBuff; // 0x70
		::Class_0_16E4307DCC419505_165<::System::Int32>* TotalSeconds; // 0x78
		::Class_0_16E4307DCC419505_165<::System::Boolean>* NoPop; // 0x80
		::Class_0_16E4307DCC419505_165<::System::Int32>* CurrentCoin; // 0x88
		::Class_0_16E4307DCC419505_165<::System::Int32>* TotalCoin; // 0x90
		::Class_0_16E4307DCC419505_165<::System::Int32>* CanGetCoin1; // 0x98

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
