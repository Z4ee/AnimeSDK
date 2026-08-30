#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class LiveRoomIconUiData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA66C70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE___C__DISPLAYCLASS0_0__STARTSERVICE_B__0_OFFSET UNITYSDK_OFFSET(0x1BA66DC0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ShowLiveRoomIconEditService___c__DisplayClass0_0_TypeDefinitionIndex = 75066;

	class ShowLiveRoomIconEditService___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::UInt32 curIconId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _StartService_b__0(::RPG::Client::ActivityIdleLive::LiveRoomIconUiData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::LiveRoomIconUiData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE___C__DISPLAYCLASS0_0__STARTSERVICE_B__0_OFFSET))(this, a1);
		}
	};
}
