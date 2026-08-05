#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovBagPopWindowController; }

#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS124_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A1B200)
#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS124_0__ONCLICKBANGKOVITEMIMPL_B__0_OFFSET UNITYSDK_OFFSET(0x11A1B210)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagPopWindowController___c__DisplayClass124_0_TypeDefinitionIndex = 79226;

	class UIZenkovBagPopWindowController___c__DisplayClass124_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovBagPopWindowController* __4__this; // 0x10
		::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo localBangkovItemInfo; // 0x18
		::System::Int32 gen; // 0x30
		::System::Boolean noBagIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS124_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickBangkovItemImpl_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS124_0__ONCLICKBANGKOVITEMIMPL_B__0_OFFSET))(this);
		}
	};
}
