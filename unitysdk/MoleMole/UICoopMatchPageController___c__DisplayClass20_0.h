#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICoopMatchPageController_LevelTabStatus.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICoopMatchPageController; }
namespace System { class Action; }

#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F71590)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___C__DISPLAYCLASS20_0__REFRESHTABANIM_B__0_OFFSET UNITYSDK_OFFSET(0x17F74030)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchPageController___c__DisplayClass20_0_TypeDefinitionIndex = 44200;

	class UICoopMatchPageController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Action* fadeOutCallBack; // 0x10
		::MoleMole::UICoopMatchPageController* __4__this; // 0x18
		::MoleMole::UICoopMatchPageController_LevelTabStatus newSubType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshTabAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___C__DISPLAYCLASS20_0__REFRESHTABANIM_B__0_OFFSET))(this);
		}
	};
}
