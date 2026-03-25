#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RaidCollectionType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_ISSEENAVATARREWARD_OFFSET UNITYSDK_OFFSET(0xA275390)
#define RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_ISSEENTIMELIMITEDREWARD_OFFSET UNITYSDK_OFFSET(0xA275190)
#define RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_RECORDAVATARREWARDSEEN_OFFSET UNITYSDK_OFFSET(0xA275480)
#define RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_RECORDTIMELIMITEDREWARDSEEN_OFFSET UNITYSDK_OFFSET(0xA275280)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidCollectionActivityUtils_TypeDefinitionIndex = 54321;

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
