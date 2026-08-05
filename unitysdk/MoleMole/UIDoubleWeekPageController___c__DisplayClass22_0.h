#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDoubleWeekScheduleRowWidgetController; }

#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AAE1C0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS22_0__DOREFRESHBINGOFORSINGLEGRID_B__0_OFFSET UNITYSDK_OFFSET(0x18AAE1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleWeekPageController___c__DisplayClass22_0_TypeDefinitionIndex = 65953;

	class UIDoubleWeekPageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDoubleWeekScheduleRowWidgetController* ctrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoRefreshBingoForSingleGrid_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS22_0__DOREFRESHBINGOFORSINGLEGRID_B__0_OFFSET))(this);
		}
	};
}
