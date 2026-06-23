#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A9EE10)
#define MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9EE50)
#define MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__ONUIINIT_B__1_2_OFFSET UNITYSDK_OFFSET(0x16A9EE60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralStaminaShowWidgetController___c_TypeDefinitionIndex = 72847;

	class UIGeneralStaminaShowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGeneralStaminaShowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralStaminaShowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralStaminaShowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37A40);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__1_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralStaminaShowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37A48);
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
