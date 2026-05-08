#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYCOMBATPAUSEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EBCF20)
#define MOLEMOLE_UIACTIVITYCOMBATPAUSEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBCF60)
#define MOLEMOLE_UIACTIVITYCOMBATPAUSEPAGECONTROLLER___C__ONCLICKMAINCITY_B__12_0_OFFSET UNITYSDK_OFFSET(0x15EBCF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCombatPausePageController___c_TypeDefinitionIndex = 43049;

	class UIActivityCombatPausePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityCombatPausePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityCombatPausePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCombatPausePageController___c_TypeDefinitionIndex)->GetStaticField(0x40640);
		}
		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCombatPausePageController___c_TypeDefinitionIndex)->GetStaticField(0x40648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickMainCity_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSEPAGECONTROLLER___C__ONCLICKMAINCITY_B__12_0_OFFSET))(this);
		}
	};
}
