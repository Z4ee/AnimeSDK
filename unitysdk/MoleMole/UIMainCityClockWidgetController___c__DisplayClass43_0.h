#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityClockWidgetController; }

#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x147B6E20)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___C__DISPLAYCLASS43_0__DOREFRESHTIME_B__1_OFFSET UNITYSDK_OFFSET(0x147B6E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityClockWidgetController___c__DisplayClass43_0_TypeDefinitionIndex = 53262;

	class UIMainCityClockWidgetController___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityClockWidgetController* __4__this; // 0x10
		::System::Int32 hours; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoRefreshTime_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___C__DISPLAYCLASS43_0__DOREFRESHTIME_B__1_OFFSET))(this);
		}
	};
}
