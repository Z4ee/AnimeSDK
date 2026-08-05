#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Leaderboards { class CopyLeaderboardDefinitionByLeaderboardIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B5900)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9B57E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONSINTERNAL_SET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x9B5660)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9B5710)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int CopyLeaderboardDefinitionByLeaderboardIdOptionsInternal_TypeDefinitionIndex = 36448;

	struct alignas(8) CopyLeaderboardDefinitionByLeaderboardIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LeaderboardId; // 0x18

		::System::Void set_LeaderboardId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONSINTERNAL_SET_LEADERBOARDID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
