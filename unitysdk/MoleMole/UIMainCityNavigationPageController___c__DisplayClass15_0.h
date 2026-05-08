#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityNavigationAreaRowWidgetController; }
namespace MoleMole { class UIMainCityNavigationPageController; }

#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4C5C0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS15_0__LATEUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x15D4C5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageController___c__DisplayClass15_0_TypeDefinitionIndex = 72495;

	class UIMainCityNavigationPageController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityNavigationAreaRowWidgetController* ctrl; // 0x10
		::MoleMole::UIMainCityNavigationPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _LateUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS15_0__LATEUPDATE_B__0_OFFSET))(this);
		}
	};
}
