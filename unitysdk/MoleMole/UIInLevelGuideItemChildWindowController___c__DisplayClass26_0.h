#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162F24B0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__SETVISIBLE_B__0_OFFSET UNITYSDK_OFFSET(0x162F24C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelGuideItemChildWindowController___c__DisplayClass26_0_TypeDefinitionIndex = 67354;

	class UIInLevelGuideItemChildWindowController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetVisible_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__SETVISIBLE_B__0_OFFSET))(this);
		}
	};
}
