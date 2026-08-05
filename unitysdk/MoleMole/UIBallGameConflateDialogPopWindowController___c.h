#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBALLGAMECONFLATEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9F0B80)
#define MOLEMOLE_UIBALLGAMECONFLATEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F0BC0)
#define MOLEMOLE_UIBALLGAMECONFLATEDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__8_3_OFFSET UNITYSDK_OFFSET(0x1F9F0BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameConflateDialogPopWindowController___c_TypeDefinitionIndex = 93280;

	class UIBallGameConflateDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__8_3()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIBallGameConflateDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x52260);
		}
		static ::MoleMole::UIBallGameConflateDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIBallGameConflateDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBallGameConflateDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x52268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECONFLATEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECONFLATEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECONFLATEDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__8_3_OFFSET))(this);
		}
	};
}
