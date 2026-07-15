#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITDIALOGCMD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A18BA60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITDIALOGCMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A18BFF0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ShowLiveRoomIconEditDialogCmd_TypeDefinitionIndex = 71757;

	class ShowLiveRoomIconEditDialogCmd : public ::Class_1_3713064DEE761936
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITDIALOGCMD__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITDIALOGCMD_ONEXECUTE_OFFSET))(this);
		}
	};
}
