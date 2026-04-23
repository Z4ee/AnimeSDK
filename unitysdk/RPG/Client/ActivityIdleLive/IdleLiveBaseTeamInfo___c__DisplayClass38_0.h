#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B37F40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS38_0___ADDTEAMAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x9B39740)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTeamInfo___c__DisplayClass38_0_TypeDefinitionIndex = 69156;

	class IdleLiveBaseTeamInfo___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddTeamAvatar_b__0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS38_0___ADDTEAMAVATAR_B__0_OFFSET))(this, slot);
		}
	};
}
