#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5B4F6BAA7CB97549.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
namespace MoleMole { class UIArcadeFriendInvitePopWindowController; }

#define MOLEMOLE_UIARCADEFRIENDINVITEPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164569F0)
#define MOLEMOLE_UIARCADEFRIENDINVITEPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__ONFRIENDTABCLICK_B__1_OFFSET UNITYSDK_OFFSET(0x16456A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeFriendInvitePopWindowController___c__DisplayClass8_0_TypeDefinitionIndex = 62447;

	class UIArcadeFriendInvitePopWindowController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeFriendInvitePopWindowController* __4__this; // 0x10
		::Enum_3_5B4F6BAA7CB97549 fromType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEFRIENDINVITEPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnFriendTabClick_b__1(::Class_1_BE6BF7909AD9D940* brief)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEFRIENDINVITEPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__ONFRIENDTABCLICK_B__1_OFFSET))(this, brief);
		}
	};
}
