#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendRewardType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityLocalLegendRewardGroup; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC61F530)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C__DISPLAYCLASS2_0__HASUNTAKENREWARD_B__0_OFFSET UNITYSDK_OFFSET(0xC61F730)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendRewardData___c__DisplayClass2_0_TypeDefinitionIndex = 61658;

	class ActivityLocalLegendRewardData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityLocalLegendRewardType rewardType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasUntakenReward_b__0(::RPG::Client::ActivityLocalLegendRewardGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityLocalLegendRewardGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C__DISPLAYCLASS2_0__HASUNTAKENREWARD_B__0_OFFSET))(this, a1);
		}
	};
}
