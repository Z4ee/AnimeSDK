#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A7670)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL___C__DISPLAYCLASS26_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0xB0A79C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RewardOverviewViewModel___c__DisplayClass26_0_TypeDefinitionIndex = 57417;

	class ActivityBenefitV2RewardOverviewViewModel___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* normalPrizeItemIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__1(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL___C__DISPLAYCLASS26_0___CTOR_B__1_OFFSET))(this, a1);
		}
	};
}
