#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityRewardCountData; }
namespace RPG::Client { class ActivityRewardCountItemData; }

#define RPG_CLIENT_ACTIVITYREWARDCOUNTDATAEXT_GETHCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x9C57430)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardCountDataExt_TypeDefinitionIndex = 56989;

	class ActivityRewardCountDataExt : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityRewardCountItemData* GetHCoinCount(::RPG::Client::ActivityRewardCountData* rewardCount)
		{
			return ((::RPG::Client::ActivityRewardCountItemData*(*)(::RPG::Client::ActivityRewardCountData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTDATAEXT_GETHCOINCOUNT_OFFSET))(rewardCount);
		}
	};
}
