#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150FCFD0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150FD010)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__ONUIOPEN_B__12_0_OFFSET UNITYSDK_OFFSET(0x150FD020)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__ONUIOPEN_B__12_1_OFFSET UNITYSDK_OFFSET(0x150FD370)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelBattleWidgetController___c_TypeDefinitionIndex = 83792;

	class UIRABInLevelBattleWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__12_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelBattleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x472E0);
		}
		static ::System::Action** StaticGet___9__12_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelBattleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x472E8);
		}
		static ::MoleMole::UIRABInLevelBattleWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRABInLevelBattleWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelBattleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x472F0);
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
