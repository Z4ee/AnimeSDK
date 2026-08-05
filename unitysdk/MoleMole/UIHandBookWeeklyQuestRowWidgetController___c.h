#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184225A0)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184225E0)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__11_0_OFFSET UNITYSDK_OFFSET(0x184225F0)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__11_1_OFFSET UNITYSDK_OFFSET(0x18422790)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookWeeklyQuestRowWidgetController___c_TypeDefinitionIndex = 42010;

	class UIHandBookWeeklyQuestRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookWeeklyQuestRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookWeeklyQuestRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeeklyQuestRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32E70);
		}
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeeklyQuestRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32E78);
		}
		static ::System::Action** StaticGet___9__11_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeeklyQuestRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnRewardBtnClick_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__11_0_OFFSET))(this);
		}

		::System::Void _OnRewardBtnClick_b__11_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__11_1_OFFSET))(this);
		}
	};
}
