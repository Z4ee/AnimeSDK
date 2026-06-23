#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBALLGAMEBOXDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F483B0)
#define MOLEMOLE_UIBALLGAMEBOXDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F483F0)
#define MOLEMOLE_UIBALLGAMEBOXDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__8_0_OFFSET UNITYSDK_OFFSET(0x17F48400)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameBoxDialogPopWindowController___c_TypeDefinitionIndex = 72442;

	class UIBallGameBoxDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__8_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIBallGameBoxDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C8A0);
		}
		static ::MoleMole::UIBallGameBoxDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIBallGameBoxDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBallGameBoxDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C8A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEBOXDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEBOXDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEBOXDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__8_0_OFFSET))(this);
		}
	};
}
