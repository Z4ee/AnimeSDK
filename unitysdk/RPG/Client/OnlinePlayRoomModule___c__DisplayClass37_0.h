#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionModule; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD9EEC70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS37_0___ACCEPTANDTRACKPREMISSION_B__0_OFFSET UNITYSDK_OFFSET(0xD9F4370)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule___c__DisplayClass37_0_TypeDefinitionIndex = 66404;

	class OnlinePlayRoomModule___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::RPG::Client::MissionModule* missionModule; // 0x10
		::System::UInt32 preMissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void __AcceptAndTrackPreMission_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS37_0___ACCEPTANDTRACKPREMISSION_B__0_OFFSET))(this);
		}
	};
}
