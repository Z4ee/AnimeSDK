#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1586EDF0)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1586EE30)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__84_0_OFFSET UNITYSDK_OFFSET(0x1586F060)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__SHOWENDTIMETIP_B__45_0_OFFSET UNITYSDK_OFFSET(0x1586EE40)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEntrancePageController___c_TypeDefinitionIndex = 64975;

	class UIAbyssEntrancePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssEntrancePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssEntrancePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssEntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x41E40);
		}
		static ::System::Action** StaticGet___9__84_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssEntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x41E48);
		}
		static ::System::Action** StaticGet___9__45_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssEntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x41E50);
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
