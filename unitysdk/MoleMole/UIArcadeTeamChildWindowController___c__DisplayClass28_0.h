#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_0F3D5EC707ADF550;
namespace MoleMole { class UIArcadeTeamChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181CBD80)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__ONCLICKKICKOFFHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x181CBD90)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__ONCLICKKICKOFFHANDLER_B__2_OFFSET UNITYSDK_OFFSET(0x181CBF40)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController___c__DisplayClass28_0_TypeDefinitionIndex = 60527;

	class UIArcadeTeamChildWindowController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeTeamChildWindowController* __4__this; // 0x10
		::Class_3_0F3D5EC707ADF550* playerInfo; // 0x18
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
