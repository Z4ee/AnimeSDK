#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATINVITEFRIENDPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA1291E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATINVITEFRIENDPARAM_GET_UID_OFFSET UNITYSDK_OFFSET(0xA129270)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATINVITEFRIENDPARAM_SET_UID_OFFSET UNITYSDK_OFFSET(0xA129280)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATINVITEFRIENDPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA129260)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatInviteFriendParam_TypeDefinitionIndex = 69885;

	class DiceCombatInviteFriendParam : public ::System::Object
	{
	public:
		::System::UInt32 _UID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATINVITEFRIENDPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatInviteFriendParam* Create(::System::UInt32 uid)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatInviteFriendParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATINVITEFRIENDPARAM_CREATE_OFFSET))(uid);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATINVITEFRIENDPARAM_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATINVITEFRIENDPARAM_SET_UID_OFFSET))(this, value);
		}
	};
}
