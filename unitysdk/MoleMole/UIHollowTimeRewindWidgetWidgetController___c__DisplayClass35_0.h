#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowTimeRewindFillWidgetWidgetController; }
namespace MoleMole { class UIHollowTimeRewindWidgetWidgetController; }

#define MOLEMOLE_UIHOLLOWTIMEREWINDWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14FDCE90)
#define MOLEMOLE_UIHOLLOWTIMEREWINDWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS35_0__ONTIMEREWINDNOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0x14FDCEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTimeRewindWidgetWidgetController___c__DisplayClass35_0_TypeDefinitionIndex = 54738;

	class UIHollowTimeRewindWidgetWidgetController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowTimeRewindFillWidgetWidgetController* local; // 0x10
		::MoleMole::UIHollowTimeRewindWidgetWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIMEREWINDWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTimeRewindNotify_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIMEREWINDWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS35_0__ONTIMEREWINDNOTIFY_B__0_OFFSET))(this);
		}
	};
}
