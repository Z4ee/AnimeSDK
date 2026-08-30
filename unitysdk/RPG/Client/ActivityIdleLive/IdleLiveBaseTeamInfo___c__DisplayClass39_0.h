#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B91A4C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS39_0___UPDATETEAMPOS_B__0_OFFSET UNITYSDK_OFFSET(0x1B91B7C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTeamInfo___c__DisplayClass39_0_TypeDefinitionIndex = 74798;

	class IdleLiveBaseTeamInfo___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateTeamPos_b__0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS39_0___UPDATETEAMPOS_B__0_OFFSET))(this, a1);
		}
	};
}
