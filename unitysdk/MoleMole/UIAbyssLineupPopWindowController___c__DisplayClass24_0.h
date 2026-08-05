#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIAbyssLineupPopWindowController; }

#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197AEBE0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__ONLEVELCLICKHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x197AEBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssLineupPopWindowController___c__DisplayClass24_0_TypeDefinitionIndex = 85756;

	class UIAbyssLineupPopWindowController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::ScrollViewItemWidgetController* obj; // 0x10
		::MoleMole::UIAbyssLineupPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLevelClickHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__ONLEVELCLICKHANDLE_B__0_OFFSET))(this);
		}
	};
}
