#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B97B70)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B97BB0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__ONUIOPEN_B__12_0_OFFSET UNITYSDK_OFFSET(0x11B97BC0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__ONUIOPEN_B__12_1_OFFSET UNITYSDK_OFFSET(0x11B97F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelBattleWidgetController___c_TypeDefinitionIndex = 85609;

	class UIRABInLevelBattleWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__12_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelBattleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43450);
		}
		static ::MoleMole::UIRABInLevelBattleWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRABInLevelBattleWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelBattleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43458);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__12_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelBattleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__ONUIOPEN_B__12_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__ONUIOPEN_B__12_1_OFFSET))(this);
		}
	};
}
