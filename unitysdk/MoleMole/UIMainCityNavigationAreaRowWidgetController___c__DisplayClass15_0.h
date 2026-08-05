#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityNavigationAreaRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYNAVIGATIONAREAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x168BCD30)
#define MOLEMOLE_UIMAINCITYNAVIGATIONAREAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__PLAYUNLOCKANIM_B__0_OFFSET UNITYSDK_OFFSET(0x168BCD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationAreaRowWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 58586;

	class UIMainCityNavigationAreaRowWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIMainCityNavigationAreaRowWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONAREAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayUnlockAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONAREAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__PLAYUNLOCKANIM_B__0_OFFSET))(this);
		}
	};
}
