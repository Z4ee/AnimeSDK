#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYINDEXOPTIONS_GET_LEADERBOARDINDEX_OFFSET UNITYSDK_OFFSET(0xB3784D0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYINDEXOPTIONS_SET_LEADERBOARDINDEX_OFFSET UNITYSDK_OFFSET(0xB3784E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB3784F0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int CopyLeaderboardDefinitionByIndexOptions_TypeDefinitionIndex = 45850;

	class CopyLeaderboardDefinitionByIndexOptions : public ::System::Object
	{
	public:
		::System::UInt32 _LeaderboardIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LeaderboardIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYINDEXOPTIONS_GET_LEADERBOARDINDEX_OFFSET))(this);
		}

		::System::Void set_LeaderboardIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYINDEXOPTIONS_SET_LEADERBOARDINDEX_OFFSET))(this, a1);
		}
	};
}
