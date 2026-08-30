#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonAssistData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonFriendSoltData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0CF330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS4_0__TRYADDASSISTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1C0D07E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS4_0__TRYADDASSISTDATA_B__1_OFFSET UNITYSDK_OFFSET(0x1C0D0800)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonData___c__DisplayClass4_0_TypeDefinitionIndex = 74901;

	class IdleLiveDungeonData___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryAddAssistData_b__0(::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS4_0__TRYADDASSISTDATA_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _TryAddAssistData_b__1(::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS4_0__TRYADDASSISTDATA_B__1_OFFSET))(this, a1);
		}
	};
}
