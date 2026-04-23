#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::DiceCombat { class DiceCombatPVPManager; }
namespace System { class Action; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA12DE00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__JOININVITATIONLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xA12FD20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__JOININVITATIONLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xA12FD50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__JOININVITATIONLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0xA12FE20)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVPManager___c__DisplayClass11_0_TypeDefinitionIndex = 69900;

	class DiceCombatPVPManager___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatPVPManager* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::System::UInt64 roomID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _JoinInvitationLobby_b__0(::System::Boolean hasReconnected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__JOININVITATIONLOBBY_B__0_OFFSET))(this, hasReconnected);
		}

		::System::Void _JoinInvitationLobby_b__1(::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2> args)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__JOININVITATIONLOBBY_B__1_OFFSET))(this, args);
		}

		::System::Void _JoinInvitationLobby_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS11_0__JOININVITATIONLOBBY_B__2_OFFSET))(this);
		}
	};
}
