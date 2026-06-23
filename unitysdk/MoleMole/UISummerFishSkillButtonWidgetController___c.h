#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C388B0)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C388F0)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___C__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x15C38900)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishSkillButtonWidgetController___c_TypeDefinitionIndex = 77393;

	class UISummerFishSkillButtonWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__1_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISummerFishSkillButtonWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46DA0);
		}
		static ::MoleMole::UISummerFishSkillButtonWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISummerFishSkillButtonWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISummerFishSkillButtonWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46DA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___C__ONUIINIT_B__1_0_OFFSET))(this);
		}
	};
}
