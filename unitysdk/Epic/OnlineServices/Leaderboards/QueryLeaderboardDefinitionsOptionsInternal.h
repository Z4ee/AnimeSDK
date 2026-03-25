#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Leaderboards { class QueryLeaderboardDefinitionsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x45280)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x45210)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x450B0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x45140)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x45200)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x45020)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int QueryLeaderboardDefinitionsOptionsInternal_TypeDefinitionIndex = 36217;

	struct alignas(8) QueryLeaderboardDefinitionsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::Int64 m_StartTime; // 0x18
		::System::Int64 m_EndTime; // 0x20
		::System::IntPtr m_LocalUserId; // 0x28

		/*
		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_STARTTIME_OFFSET))(this, value);
		}
		*/

		/*
		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_ENDTIME_OFFSET))(this, value);
		}
		*/

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
