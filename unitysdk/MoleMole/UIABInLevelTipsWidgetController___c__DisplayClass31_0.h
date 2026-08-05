#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABInLevelTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173C6FB0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__SCHEDULEAUTOHIDE_B__0_OFFSET UNITYSDK_OFFSET(0x173C6FC0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__SCHEDULEAUTOHIDE_B__1_OFFSET UNITYSDK_OFFSET(0x173C7090)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__SCHEDULEAUTOHIDE_B__2_OFFSET UNITYSDK_OFFSET(0x173C71E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelTipsWidgetController___c__DisplayClass31_0_TypeDefinitionIndex = 48131;

	class UIABInLevelTipsWidgetController___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::MoleMole::UIABInLevelTipsWidgetController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Action* __9__2; // 0x20
		::System::Boolean isPersistent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _ScheduleAutoHide_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__SCHEDULEAUTOHIDE_B__0_OFFSET))(this);
		}

		::System::Void _ScheduleAutoHide_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__SCHEDULEAUTOHIDE_B__1_OFFSET))(this);
		}

		::System::Void _ScheduleAutoHide_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__SCHEDULEAUTOHIDE_B__2_OFFSET))(this);
		}
	};
}
