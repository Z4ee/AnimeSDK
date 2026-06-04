#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Leaderboards { class QueryLeaderboardDefinitionsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4A3C0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4A340)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x4A1E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x4A270)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x4A330)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x4A150)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int QueryLeaderboardDefinitionsOptionsInternal_TypeDefinitionIndex = 42846;

	struct alignas(8) QueryLeaderboardDefinitionsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::Int64 m_StartTime; // 0x18
		::System::Int64 m_EndTime; // 0x20
		::System::IntPtr m_LocalUserId; // 0x28

		/*
		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_STARTTIME_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_ENDTIME_OFFSET))(this, a1);
		}
		*/

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
