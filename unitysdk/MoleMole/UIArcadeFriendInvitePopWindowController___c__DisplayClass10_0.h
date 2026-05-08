#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F3E9C4B681CD81E4.h"
#include "unitysdk/System/Object.h"

class Class_2_DF2C726EEEEC912D;
namespace MoleMole { class UIArcadeFriendInvitePopWindowController; }

#define MOLEMOLE_UIARCADEFRIENDINVITEPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1589E2E0)
#define MOLEMOLE_UIARCADEFRIENDINVITEPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__ONCIRCLETABCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x1589E2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeFriendInvitePopWindowController___c__DisplayClass10_0_TypeDefinitionIndex = 62445;

	class UIArcadeFriendInvitePopWindowController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeFriendInvitePopWindowController* __4__this; // 0x10
		::Enum_3_F3E9C4B681CD81E4 fromType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEFRIENDINVITEPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnCircleTabClick_b__0(::Class_2_DF2C726EEEEC912D* circleDataExt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF2C726EEEEC912D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEFRIENDINVITEPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__ONCIRCLETABCLICK_B__0_OFFSET))(this, circleDataExt);
		}
	};
}
