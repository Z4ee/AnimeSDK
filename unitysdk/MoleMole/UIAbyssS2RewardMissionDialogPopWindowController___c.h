#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSS2REWARDMISSIONDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BBE240)
#define MOLEMOLE_UIABYSSS2REWARDMISSIONDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18BBE280)
#define MOLEMOLE_UIABYSSS2REWARDMISSIONDIALOGPOPWINDOWCONTROLLER___C__ONRSPGETALLTASKREWARDERROR_B__18_0_OFFSET UNITYSDK_OFFSET(0x18BBE290)
#define MOLEMOLE_UIABYSSS2REWARDMISSIONDIALOGPOPWINDOWCONTROLLER___C__ONRSPGETALLTASKREWARDERROR_B__18_1_OFFSET UNITYSDK_OFFSET(0x18BBE390)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RewardMissionDialogPopWindowController___c_TypeDefinitionIndex = 57048;

	class UIAbyssS2RewardMissionDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssS2RewardMissionDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2RewardMissionDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardMissionDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4C4D0);
		}
		static ::System::Action** StaticGet___9__18_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardMissionDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4C4D8);
		}
		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardMissionDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4C4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnRspGetAllTaskRewardError_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONDIALOGPOPWINDOWCONTROLLER___C__ONRSPGETALLTASKREWARDERROR_B__18_0_OFFSET))(this);
		}

		::System::Void _OnRspGetAllTaskRewardError_b__18_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONDIALOGPOPWINDOWCONTROLLER___C__ONRSPGETALLTASKREWARDERROR_B__18_1_OFFSET))(this);
		}
	};
}
