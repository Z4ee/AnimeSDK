#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDisplayCasePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1517CE60)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS35_0__SETBTNHIDE_B__0_OFFSET UNITYSDK_OFFSET(0x1517CE70)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePageController___c__DisplayClass35_0_TypeDefinitionIndex = 78102;

	class UIDisplayCasePageController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDisplayCasePageController* __4__this; // 0x10
		::System::Action* animCallabck; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetBtnHide_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS35_0__SETBTNHIDE_B__0_OFFSET))(this);
		}
	};
}
