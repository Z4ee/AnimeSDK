#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonFriendSoltData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5A6700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS6_0__ISASSISTDATAINFRIENDSOLT_B__0_OFFSET UNITYSDK_OFFSET(0xC5A78A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonData___c__DisplayClass6_0_TypeDefinitionIndex = 74904;

	class IdleLiveDungeonData___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAssistDataInFriendSolt_b__0(::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS6_0__ISASSISTDATAINFRIENDSOLT_B__0_OFFSET))(this, a1);
		}
	};
}
