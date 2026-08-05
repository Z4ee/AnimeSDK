#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Leaderboards { class QueryLeaderboardRanksOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA23E80)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA23E10)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONSINTERNAL_SET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0xA23C90)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA23D40)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xA23E00)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int QueryLeaderboardRanksOptionsInternal_TypeDefinitionIndex = 36486;

	struct alignas(8) QueryLeaderboardRanksOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LeaderboardId; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20

		::System::Void set_LeaderboardId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONSINTERNAL_SET_LEADERBOARDID_OFFSET))(this, value);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
