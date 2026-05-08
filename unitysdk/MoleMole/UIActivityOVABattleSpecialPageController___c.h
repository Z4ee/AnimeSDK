#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYOVABATTLESPECIALPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EE94B0)
#define MOLEMOLE_UIACTIVITYOVABATTLESPECIALPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE94F0)
#define MOLEMOLE_UIACTIVITYOVABATTLESPECIALPAGECONTROLLER___C__ONUIINIT_B__10_3_OFFSET UNITYSDK_OFFSET(0x13EE9500)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOVABattleSpecialPageController___c_TypeDefinitionIndex = 71702;

	class UIActivityOVABattleSpecialPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__10_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityOVABattleSpecialPageController___c_TypeDefinitionIndex)->GetStaticField(0x2EAD0);
		}
		static ::MoleMole::UIActivityOVABattleSpecialPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityOVABattleSpecialPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityOVABattleSpecialPageController___c_TypeDefinitionIndex)->GetStaticField(0x2EAD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVABATTLESPECIALPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVABATTLESPECIALPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVABATTLESPECIALPAGECONTROLLER___C__ONUIINIT_B__10_3_OFFSET))(this);
		}
	};
}
