#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A50690)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A506D0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__8_0_OFFSET UNITYSDK_OFFSET(0x18A506E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleRuleDialogPopWindowController___c_TypeDefinitionIndex = 78783;

	class UIAutoBattleRuleDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAutoBattleRuleDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIAutoBattleRuleDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattleRuleDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4D9F0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__8_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattleRuleDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4D9F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__8_0_OFFSET))(this);
		}
	};
}
