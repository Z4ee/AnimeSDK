#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Leaderboards { class CopyLeaderboardRecordByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x42EB0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONSINTERNAL_SET_LEADERBOARDRECORDINDEX_OFFSET UNITYSDK_OFFSET(0x1D50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2140)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int CopyLeaderboardRecordByIndexOptionsInternal_TypeDefinitionIndex = 36183;

	struct alignas(4) CopyLeaderboardRecordByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_LeaderboardRecordIndex; // 0x14

		::System::Void set_LeaderboardRecordIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONSINTERNAL_SET_LEADERBOARDRECORDINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
