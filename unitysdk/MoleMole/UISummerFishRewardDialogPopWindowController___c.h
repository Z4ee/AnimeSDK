#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUMMERFISHREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A5FE10)
#define MOLEMOLE_UISUMMERFISHREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A5FE50)
#define MOLEMOLE_UISUMMERFISHREWARDDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0x15A5FE60)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishRewardDialogPopWindowController___c_TypeDefinitionIndex = 52069;

	class UISummerFishRewardDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISummerFishRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37010);
		}
		static ::MoleMole::UISummerFishRewardDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UISummerFishRewardDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UISummerFishRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHREWARDDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__3_1_OFFSET))(this);
		}
	};
}
