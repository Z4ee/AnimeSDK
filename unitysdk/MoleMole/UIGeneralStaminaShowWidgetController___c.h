#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18815370)
#define MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188153B0)
#define MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__ONUIINIT_B__1_2_OFFSET UNITYSDK_OFFSET(0x188153C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralStaminaShowWidgetController___c_TypeDefinitionIndex = 41991;

	class UIGeneralStaminaShowWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__1_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralStaminaShowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A3D0);
		}
		static ::MoleMole::UIGeneralStaminaShowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralStaminaShowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralStaminaShowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A3D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__ONUIINIT_B__1_2_OFFSET))(this);
		}
	};
}
