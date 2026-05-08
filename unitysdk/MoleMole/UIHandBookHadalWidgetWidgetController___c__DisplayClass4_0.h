#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_2_8FC1A7735F246865;
namespace MoleMole { class UIHandBookHadalWidgetWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x149F7F50)
#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONSHOW_B__0_OFFSET UNITYSDK_OFFSET(0x149F7F60)
#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONSHOW_B__1_OFFSET UNITYSDK_OFFSET(0x149F86B0)
#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONSHOW_B__2_OFFSET UNITYSDK_OFFSET(0x149F8670)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookHadalWidgetWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 70182;

	class UIHandBookHadalWidgetWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Class_2_8FC1A7735F246865* shopModel; // 0x10
		::MoleMole::UIHandBookHadalWidgetWidgetController* __4__this; // 0x18
		::System::Action* __9__2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONSHOW_B__0_OFFSET))(this);
		}

		::System::Void _OnShow_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONSHOW_B__2_OFFSET))(this);
		}

		::System::Void _OnShow_b__1(::Class_0_16E4307DCC419505_11* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONSHOW_B__1_OFFSET))(this, error);
		}
	};
}
