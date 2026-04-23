#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RaidCollectionType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_ISSEENAVATARREWARD_OFFSET UNITYSDK_OFFSET(0xAF63E70)
#define RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_ISSEENTIMELIMITEDREWARD_OFFSET UNITYSDK_OFFSET(0xAF63C70)
#define RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_RECORDAVATARREWARDSEEN_OFFSET UNITYSDK_OFFSET(0xAF63F60)
#define RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_RECORDTIMELIMITEDREWARDSEEN_OFFSET UNITYSDK_OFFSET(0xAF63D60)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidCollectionActivityUtils_TypeDefinitionIndex = 61484;

	class RaidCollectionActivityUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsSeenTimeLimitedReward(::RPG::GameCore::RaidCollectionType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_ISSEENTIMELIMITEDREWARD_OFFSET))(type);
		}

		static ::System::Boolean RecordTimeLimitedRewardSeen(::RPG::GameCore::RaidCollectionType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_RECORDTIMELIMITEDREWARDSEEN_OFFSET))(type);
		}

		static ::System::Boolean IsSeenAvatarReward(::RPG::GameCore::RaidCollectionType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_ISSEENAVATARREWARD_OFFSET))(type);
		}

		static ::System::Boolean RecordAvatarRewardSeen(::RPG::GameCore::RaidCollectionType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_RECORDAVATARREWARDSEEN_OFFSET))(type);
		}
	};
}
