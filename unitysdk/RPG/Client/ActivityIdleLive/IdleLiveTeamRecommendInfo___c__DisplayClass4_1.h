#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamRecommendData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA56A10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_1__GETRECOMMENDDATALISTSORTEDBYWEIGHT_B__3_OFFSET UNITYSDK_OFFSET(0x1BA57120)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamRecommendInfo___c__DisplayClass4_1_TypeDefinitionIndex = 74790;

	class IdleLiveTeamRecommendInfo___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::System::UInt32 toppingAvatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRecommendDataListSortedByWeight_b__3(::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_1__GETRECOMMENDDATALISTSORTEDBYWEIGHT_B__3_OFFSET))(this, a1);
		}
	};
}
