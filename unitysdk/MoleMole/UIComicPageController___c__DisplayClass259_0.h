#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController; }
namespace System { class Action; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS259_0__CLOSEMENU_B__0_OFFSET UNITYSDK_OFFSET(0x1869D5F0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS259_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1869D5E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass259_0_TypeDefinitionIndex = 87092;

	class UIComicPageController___c__DisplayClass259_0 : public ::System::Object
	{
	public:
		::System::Action* finishCB; // 0x10
		::MoleMole::UIComicPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS259_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseMenu_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS259_0__CLOSEMENU_B__0_OFFSET))(this);
		}
	};
}
