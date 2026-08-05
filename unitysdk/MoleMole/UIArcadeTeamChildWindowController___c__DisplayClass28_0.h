#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5078920EEFF548CF;
namespace MoleMole { class UIArcadeTeamChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197735F0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__ONCLICKKICKOFFHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x19773600)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__ONCLICKKICKOFFHANDLER_B__2_OFFSET UNITYSDK_OFFSET(0x197737B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController___c__DisplayClass28_0_TypeDefinitionIndex = 65758;

	class UIArcadeTeamChildWindowController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::Class_3_5078920EEFF548CF* playerInfo; // 0x10
		::MoleMole::UIArcadeTeamChildWindowController* __4__this; // 0x18
		::System::Action* __9__2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickKickoffHandler_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__ONCLICKKICKOFFHANDLER_B__0_OFFSET))(this);
		}

		::System::Void _OnClickKickoffHandler_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__ONCLICKKICKOFFHANDLER_B__2_OFFSET))(this);
		}
	};
}
