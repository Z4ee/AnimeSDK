#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYINDEXOPTIONS_GET_LEADERBOARDINDEX_OFFSET UNITYSDK_OFFSET(0xA2D5660)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYINDEXOPTIONS_SET_LEADERBOARDINDEX_OFFSET UNITYSDK_OFFSET(0xA2D5670)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2D5680)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int CopyLeaderboardDefinitionByIndexOptions_TypeDefinitionIndex = 42807;

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
