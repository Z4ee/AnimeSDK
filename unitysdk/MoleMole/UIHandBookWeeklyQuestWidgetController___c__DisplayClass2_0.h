#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_643;
class Class_2_BCB29D9ECCEF0E00;
namespace MoleMole { class UIHandBookWeeklyQuestWidgetController; }

#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAEF90)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x17DAEFA0)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__1_OFFSET UNITYSDK_OFFSET(0x17DAEFD0)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__2_OFFSET UNITYSDK_OFFSET(0x17DAF000)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookWeeklyQuestWidgetController___c__DisplayClass2_0_TypeDefinitionIndex = 61787;

	class UIHandBookWeeklyQuestWidgetController___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Class_2_BCB29D9ECCEF0E00* lockModel; // 0x10
		::MoleMole::UIHandBookWeeklyQuestWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__1_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__2(::Class_2_208CC9941471731A_643* entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_643*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__2_OFFSET))(this, entry);
		}
	};
}
