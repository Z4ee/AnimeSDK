#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149E3D50)
#define MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149E3D90)
#define MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__ONUIINIT_B__1_2_OFFSET UNITYSDK_OFFSET(0x149E3DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralStaminaShowWidgetController___c_TypeDefinitionIndex = 73176;

	class UIGeneralStaminaShowWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__1_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralStaminaShowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35060);
		}
		static ::MoleMole::UIGeneralStaminaShowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralStaminaShowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralStaminaShowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35068);
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
