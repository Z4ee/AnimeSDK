#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UISUIBIANTEMPLEDAILYPAPERDIALOGPOPWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xEBBBE10)
#define MOLEMOLE_UISUIBIANTEMPLEDAILYPAPERDIALOGPOPWINDOWCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xEBBBF50)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleDailyPaperDialogPopWindowController_UIState_TypeDefinitionIndex = 67938;

	class UISuibianTempleDailyPaperDialogPopWindowController_UIState : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC41950C_13<::System::Int32>* CanGetCoin2; // 0x70
		::Class_0_16E4307DCC41950C_13<::System::Boolean>* NoPop; // 0x78
		::Class_0_16E4307DCC41950C_13<::System::Int32>* CurrentCoin; // 0x80
		::Class_0_16E4307DCC41950C_13<::System::Int32>* CurrentBuff; // 0x88
		::Class_0_16E4307DCC41950C_13<::System::Int32>* TotalSeconds; // 0x90
		::Class_0_16E4307DCC41950C_13<::System::Int32>* CurrentPolicy; // 0x98
		::Class_0_16E4307DCC41950C_13<::System::Int32>* TotalCoin; // 0xA0
		::Class_0_16E4307DCC41950C_13<::System::Int32>* CanGetCoin1; // 0xA8

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
