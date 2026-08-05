#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeTeamChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x189520F0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS44_0__PLAYROOTANIM_B__0_OFFSET UNITYSDK_OFFSET(0x18952100)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController___c__DisplayClass44_0_TypeDefinitionIndex = 65760;

	class UIArcadeTeamChildWindowController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIArcadeTeamChildWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRootAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS44_0__PLAYROOTANIM_B__0_OFFSET))(this);
		}
	};
}
