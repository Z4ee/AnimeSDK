#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeGamingChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197DF3F0)
#define MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__DISPLAYCLASS48_0__PLAYROOTANIM_B__0_OFFSET UNITYSDK_OFFSET(0x197DF400)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeGamingChildWindowController___c__DisplayClass48_0_TypeDefinitionIndex = 87296;

	class UIArcadeGamingChildWindowController___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIArcadeGamingChildWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRootAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__DISPLAYCLASS48_0__PLAYROOTANIM_B__0_OFFSET))(this);
		}
	};
}
