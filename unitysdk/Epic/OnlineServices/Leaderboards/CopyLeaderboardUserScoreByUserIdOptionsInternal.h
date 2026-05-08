#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Leaderboards { class CopyLeaderboardUserScoreByUserIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x912260)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9121F0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9121E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONSINTERNAL_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x912130)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONSINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x912070)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int CopyLeaderboardUserScoreByUserIdOptionsInternal_TypeDefinitionIndex = 34234;

	struct alignas(8) CopyLeaderboardUserScoreByUserIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserId; // 0x18
		::System::IntPtr m_StatName; // 0x20

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONSINTERNAL_SET_USERID_OFFSET))(this, value);
		}

		::System::Void set_StatName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONSINTERNAL_SET_STATNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByUserIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByUserIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
