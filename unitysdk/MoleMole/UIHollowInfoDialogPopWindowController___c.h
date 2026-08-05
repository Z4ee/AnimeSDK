#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DB8860)
#define MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB88A0)
#define MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x17DB88B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoDialogPopWindowController___c_TypeDefinitionIndex = 75520;

	class UIHollowInfoDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHollowInfoDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowInfoDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3FDA0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__5_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3FDA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__5_0_OFFSET))(this);
		}
	};
}
