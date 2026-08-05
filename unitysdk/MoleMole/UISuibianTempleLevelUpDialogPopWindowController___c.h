#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISUIBIANTEMPLELEVELUPDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15121300)
#define MOLEMOLE_UISUIBIANTEMPLELEVELUPDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15121340)
#define MOLEMOLE_UISUIBIANTEMPLELEVELUPDIALOGPOPWINDOWCONTROLLER___C__ONUIDESTROY_B__7_0_OFFSET UNITYSDK_OFFSET(0x15121350)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleLevelUpDialogPopWindowController___c_TypeDefinitionIndex = 54380;

	class UISuibianTempleLevelUpDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleLevelUpDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleLevelUpDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleLevelUpDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47350);
		}
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleLevelUpDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLELEVELUPDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLELEVELUPDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIDestroy_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLELEVELUPDIALOGPOPWINDOWCONTROLLER___C__ONUIDESTROY_B__7_0_OFFSET))(this);
		}
	};
}
