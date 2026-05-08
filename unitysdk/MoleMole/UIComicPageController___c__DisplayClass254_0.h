#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController; }
namespace System { class Action; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS254_0__CLOSEMENU_B__0_OFFSET UNITYSDK_OFFSET(0x14300E30)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS254_0__CTOR_OFFSET UNITYSDK_OFFSET(0x142EBA00)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass254_0_TypeDefinitionIndex = 40022;

	class UIComicPageController___c__DisplayClass254_0 : public ::System::Object
	{
	public:
		::System::Action* finishCB; // 0x10
		::MoleMole::UIComicPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS254_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseMenu_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS254_0__CLOSEMENU_B__0_OFFSET))(this);
		}
	};
}
