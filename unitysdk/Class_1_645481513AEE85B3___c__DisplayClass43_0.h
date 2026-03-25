#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatInviteFriendParam; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPManager; }

#define CLASS_1_645481513AEE85B3___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105BE500)
#define CLASS_1_645481513AEE85B3___C__DISPLAYCLASS43_0__INVITEFRIENDPVP_B__0_OFFSET UNITYSDK_OFFSET(0x105BF310)

inline static constexpr unsigned int Class_1_645481513AEE85B3___c__DisplayClass43_0_TypeDefinitionIndex = 61951;

class Class_1_645481513AEE85B3___c__DisplayClass43_0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatPVPManager* pvpMgr; // 0x10
	::RPG::Client::DiceCombat::DiceCombatInviteFriendParam* param; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
	}

	::System::Void _InviteFriendPVP_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3___C__DISPLAYCLASS43_0__INVITEFRIENDPVP_B__0_OFFSET))(this);
	}
};
