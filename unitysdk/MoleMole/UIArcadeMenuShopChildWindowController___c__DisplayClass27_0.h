#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeMenuShopChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16457100)
#define MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__PLAYROOTANIM_B__0_OFFSET UNITYSDK_OFFSET(0x16457110)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeMenuShopChildWindowController___c__DisplayClass27_0_TypeDefinitionIndex = 80724;

	class UIArcadeMenuShopChildWindowController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeMenuShopChildWindowController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRootAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__PLAYROOTANIM_B__0_OFFSET))(this);
		}
	};
}
