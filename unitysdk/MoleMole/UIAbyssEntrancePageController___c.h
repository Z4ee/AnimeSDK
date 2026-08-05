#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180B0170)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x180B01B0)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__84_0_OFFSET UNITYSDK_OFFSET(0x180B03E0)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__SHOWENDTIMETIP_B__45_0_OFFSET UNITYSDK_OFFSET(0x180B01C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEntrancePageController___c_TypeDefinitionIndex = 57572;

	class UIAbyssEntrancePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssEntrancePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssEntrancePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssEntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x48F10);
		}
		static ::System::Action** StaticGet___9__45_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssEntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x48F18);
		}
		static ::System::Action** StaticGet___9__84_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssEntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x48F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEndTimeTip_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__SHOWENDTIMETIP_B__45_0_OFFSET))(this);
		}

		::System::Void _GoToMainCity_b__84_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__84_0_OFFSET))(this);
		}
	};
}
