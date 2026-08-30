#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONS_GET_LEADERBOARDRECORDINDEX_OFFSET UNITYSDK_OFFSET(0xB378940)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONS_SET_LEADERBOARDRECORDINDEX_OFFSET UNITYSDK_OFFSET(0xB378950)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB378960)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int CopyLeaderboardRecordByIndexOptions_TypeDefinitionIndex = 45854;

	class CopyLeaderboardRecordByIndexOptions : public ::System::Object
	{
	public:
		::System::UInt32 _LeaderboardRecordIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LeaderboardRecordIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONS_GET_LEADERBOARDRECORDINDEX_OFFSET))(this);
		}

		::System::Void set_LeaderboardRecordIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONS_SET_LEADERBOARDRECORDINDEX_OFFSET))(this, a1);
		}
	};
}
