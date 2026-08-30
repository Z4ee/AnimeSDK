#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::DiceCombat { class DiceCombatPVPManager; }
namespace System { class Action; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C410EF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__JOININVITATIONLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x1C412E90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__JOININVITATIONLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x1C412EC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__JOININVITATIONLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0x1C412FA0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVPManager___c__DisplayClass11_0_TypeDefinitionIndex = 75661;

	class DiceCombatPVPManager___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::RPG::Client::DiceCombat::DiceCombatPVPManager* __4__this; // 0x18
		::System::UInt64 roomID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _JoinInvitationLobby_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__JOININVITATIONLOBBY_B__0_OFFSET))(this, a1);
		}

		::System::Void _JoinInvitationLobby_b__1(::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__JOININVITATIONLOBBY_B__1_OFFSET))(this, a1);
		}

		::System::Void _JoinInvitationLobby_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__JOININVITATIONLOBBY_B__2_OFFSET))(this);
		}
	};
}
