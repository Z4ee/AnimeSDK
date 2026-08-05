#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole { class UIHollowMainPageController_AddHollowPopWindowEvent; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS220_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C01BE0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS220_0__ONADDHOLLOWPOPWINDOW_B__0_OFFSET UNITYSDK_OFFSET(0x17C01BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass220_0_TypeDefinitionIndex = 73671;

	class UIHollowMainPageController___c__DisplayClass220_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController_AddHollowPopWindowEvent* hollowPopWindowEvent; // 0x10
		::MoleMole::UIHollowMainPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS220_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAddHollowPopWindow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS220_0__ONADDHOLLOWPOPWINDOW_B__0_OFFSET))(this);
		}
	};
}
