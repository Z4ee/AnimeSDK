#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18252170)
#define MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182521B0)
#define MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__DOGOTONEST_B__37_0_OFFSET UNITYSDK_OFFSET(0x182521C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardSuitDialogPopWindowController___c_TypeDefinitionIndex = 65066;

	class UIHollowCardSuitDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__37_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30D80);
		}
		static ::MoleMole::UIHollowCardSuitDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowCardSuitDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30D88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoGoToNest_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__DOGOTONEST_B__37_0_OFFSET))(this);
		}
	};
}
