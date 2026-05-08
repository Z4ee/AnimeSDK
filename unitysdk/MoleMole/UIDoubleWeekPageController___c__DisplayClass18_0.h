#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDoubleWeekPageController; }

#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14E9B240)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS18_0__REFRESHGRIDS_B__0_OFFSET UNITYSDK_OFFSET(0x14E9B250)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleWeekPageController___c__DisplayClass18_0_TypeDefinitionIndex = 73440;

	class UIDoubleWeekPageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDoubleWeekPageController* __4__this; // 0x10
		::System::Int32 idx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshGrids_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS18_0__REFRESHGRIDS_B__0_OFFSET))(this);
		}
	};
}
