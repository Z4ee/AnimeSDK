#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotpotFoodItemRightWidgetController; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS180_0__ADDFOODTOPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x15B7DEB0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS180_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B7DEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass180_0_TypeDefinitionIndex = 53744;

	class UIActivityHotpotInGamePageController___c__DisplayClass180_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityHotpotFoodItemRightWidgetController* ctrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS180_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddFoodToPanel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS180_0__ADDFOODTOPANEL_B__0_OFFSET))(this);
		}
	};
}
