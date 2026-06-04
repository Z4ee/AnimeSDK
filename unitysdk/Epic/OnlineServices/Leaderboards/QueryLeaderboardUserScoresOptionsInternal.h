#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Leaderboards { class QueryLeaderboardUserScoresOptions; }
namespace Epic::OnlineServices::Leaderboards { class UserScoresQueryStatInfo; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4ABA0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4AB20)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x4A9C0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x4AA50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x4AB10)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x4A930)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_STATINFO_OFFSET UNITYSDK_OFFSET(0x4A810)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_USERIDS_OFFSET UNITYSDK_OFFSET(0x4A7A0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int QueryLeaderboardUserScoresOptionsInternal_TypeDefinitionIndex = 42850;

	struct alignas(8) QueryLeaderboardUserScoresOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserIds; // 0x18
		::System::UInt32 m_UserIdsCount; // 0x20
		::System::IntPtr m_StatInfo; // 0x28
		::System::UInt32 m_StatInfoCount; // 0x30
		::System::Int64 m_StartTime; // 0x38
		::System::Int64 m_EndTime; // 0x40
		::System::IntPtr m_LocalUserId; // 0x48

		::System::Void set_UserIds(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_USERIDS_OFFSET))(this, a1);
		}

		::System::Void set_StatInfo(::Il2CppArray<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_STATINFO_OFFSET))(this, a1);
		}

		/*
		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_STARTTIME_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_ENDTIME_OFFSET))(this, a1);
		}
		*/

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
