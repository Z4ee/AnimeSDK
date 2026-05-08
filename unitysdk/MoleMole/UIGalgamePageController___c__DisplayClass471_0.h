#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS471_0__CLOSEMENU_B__0_OFFSET UNITYSDK_OFFSET(0x151B0680)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS471_0__CTOR_OFFSET UNITYSDK_OFFSET(0x151B0670)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass471_0_TypeDefinitionIndex = 41800;

	class UIGalgamePageController___c__DisplayClass471_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::System::Action* finishCB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS471_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseMenu_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS471_0__CLOSEMENU_B__0_OFFSET))(this);
		}
	};
}
