#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B4A620)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS6_0__GETDUNGEONDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9B4DC00)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonInfo___c__DisplayClass6_0_TypeDefinitionIndex = 69274;

	class IdleLiveDungeonInfo___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 dungeonId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDungeonData_b__0(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS6_0__GETDUNGEONDATA_B__0_OFFSET))(this, data);
		}
	};
}
