#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1899FD10)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS36_0__SETVISIBLE_B__0_OFFSET UNITYSDK_OFFSET(0x1899FD20)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelGuideItemChildWindowController___c__DisplayClass36_0_TypeDefinitionIndex = 71980;

	class UIInLevelGuideItemChildWindowController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetVisible_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS36_0__SETVISIBLE_B__0_OFFSET))(this);
		}
	};
}
