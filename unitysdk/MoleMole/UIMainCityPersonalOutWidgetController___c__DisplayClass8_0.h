#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityPersonalOutWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183A6D30)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHPARTNERDATEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x183A6D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPersonalOutWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 87359;

	class UIMainCityPersonalOutWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityPersonalOutWidgetController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPartnerDateView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHPARTNERDATEVIEW_B__0_OFFSET))(this);
		}
	};
}
