#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS564_0__CLOSEMENU_B__0_OFFSET UNITYSDK_OFFSET(0x18809B00)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS564_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18809AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass564_0_TypeDefinitionIndex = 62789;

	class UIGalgamePageController___c__DisplayClass564_0 : public ::System::Object
	{
	public:
		::System::Action* finishCB; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS564_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseMenu_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS564_0__CLOSEMENU_B__0_OFFSET))(this);
		}
	};
}
