#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Leaderboards { class CopyLeaderboardUserScoreByIndexOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x43420)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x43410)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYINDEXOPTIONSINTERNAL_SET_LEADERBOARDUSERSCOREINDEX_OFFSET UNITYSDK_OFFSET(0x1D50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x43340)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYINDEXOPTIONSINTERNAL_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x43290)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int CopyLeaderboardUserScoreByIndexOptionsInternal_TypeDefinitionIndex = 36187;

	struct alignas(8) CopyLeaderboardUserScoreByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_LeaderboardUserScoreIndex; // 0x14
		::System::IntPtr m_StatName; // 0x18

		::System::Void set_LeaderboardUserScoreIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYINDEXOPTIONSINTERNAL_SET_LEADERBOARDUSERSCOREINDEX_OFFSET))(this, value);
		}

		::System::Void set_StatName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYINDEXOPTIONSINTERNAL_SET_STATNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
