#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBDCC70)
#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBDCCB0)
#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__13_2_OFFSET UNITYSDK_OFFSET(0x1EBDCCC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameOptionsDialogPopWindowController___c_TypeDefinitionIndex = 93216;

	class UIBallGameOptionsDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBallGameOptionsDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIBallGameOptionsDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBallGameOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x52190);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIBallGameOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x52198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__13_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__13_2_OFFSET))(this);
		}
	};
}
