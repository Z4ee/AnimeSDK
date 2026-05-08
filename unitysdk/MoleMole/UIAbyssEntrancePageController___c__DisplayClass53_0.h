#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssEntrancePageController; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B71E00)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS53_0__ONCLICKTALENTHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x15B71E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEntrancePageController___c__DisplayClass53_0_TypeDefinitionIndex = 64968;

	class UIAbyssEntrancePageController___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::MoleMole::UIControllerContextBase* contextBase; // 0x10
		::MoleMole::UIAbyssEntrancePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickTalentHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS53_0__ONCLICKTALENTHANDLE_B__0_OFFSET))(this);
		}
	};
}
