#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICoopMatchPageController_LevelTabStatus.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICoopMatchPageController; }

#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B71240)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___C__DISPLAYCLASS6_0__ONUIINIT_B__2_OFFSET UNITYSDK_OFFSET(0x15B71250)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchPageController___c__DisplayClass6_0_TypeDefinitionIndex = 44199;

	class UICoopMatchPageController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UICoopMatchPageController* __4__this; // 0x10
		::MoleMole::UICoopMatchPageController_LevelTabStatus tabType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___C__DISPLAYCLASS6_0__ONUIINIT_B__2_OFFSET))(this);
		}
	};
}
