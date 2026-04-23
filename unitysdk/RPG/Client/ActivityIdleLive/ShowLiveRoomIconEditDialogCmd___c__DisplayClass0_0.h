#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class LiveRoomIconUiData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITDIALOGCMD___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BDEBC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITDIALOGCMD___C__DISPLAYCLASS0_0__ONEXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x9BDEC40)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ShowLiveRoomIconEditDialogCmd___c__DisplayClass0_0_TypeDefinitionIndex = 69423;

	class ShowLiveRoomIconEditDialogCmd___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::UInt32 curIconId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITDIALOGCMD___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnExecute_b__0(::RPG::Client::ActivityIdleLive::LiveRoomIconUiData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::LiveRoomIconUiData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITDIALOGCMD___C__DISPLAYCLASS0_0__ONEXECUTE_B__0_OFFSET))(this, x);
		}
	};
}
