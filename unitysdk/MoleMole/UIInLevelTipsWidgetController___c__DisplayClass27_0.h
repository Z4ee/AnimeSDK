#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164EE970)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SCHEDULEAUTOHIDE_B__0_OFFSET UNITYSDK_OFFSET(0x164EE980)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SCHEDULEAUTOHIDE_B__1_OFFSET UNITYSDK_OFFSET(0x164EEA50)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SCHEDULEAUTOHIDE_B__2_OFFSET UNITYSDK_OFFSET(0x164EEBA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelTipsWidgetController___c__DisplayClass27_0_TypeDefinitionIndex = 77522;

	class UIInLevelTipsWidgetController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MoleMole::UIInLevelTipsWidgetController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20
		::System::Boolean isPersistent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _ScheduleAutoHide_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SCHEDULEAUTOHIDE_B__0_OFFSET))(this);
		}

		::System::Void _ScheduleAutoHide_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SCHEDULEAUTOHIDE_B__1_OFFSET))(this);
		}

		::System::Void _ScheduleAutoHide_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SCHEDULEAUTOHIDE_B__2_OFFSET))(this);
		}
	};
}
