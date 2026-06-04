#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB104180)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__DISPLAYCLASS1_0__GETSOLTDATABYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xB106F30)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ActivityIdleLiveUtils___c__DisplayClass1_0_TypeDefinitionIndex = 69938;

	class ActivityIdleLiveUtils___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ILBattleCharacterLocation type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSoltDataByType_b__0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__DISPLAYCLASS1_0__GETSOLTDATABYTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
