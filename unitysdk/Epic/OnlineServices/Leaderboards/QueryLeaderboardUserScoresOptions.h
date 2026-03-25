#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Leaderboards { class UserScoresQueryStatInfo; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x866DDC0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x866DDF0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x866DD90)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_STATINFO_OFFSET UNITYSDK_OFFSET(0x866DD70)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_USERIDS_OFFSET UNITYSDK_OFFSET(0x866DD50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x866DDE0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x866DE00)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x866DDB0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_STATINFO_OFFSET UNITYSDK_OFFSET(0x866DD80)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_USERIDS_OFFSET UNITYSDK_OFFSET(0x866DD60)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x866DE10)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int QueryLeaderboardUserScoresOptions_TypeDefinitionIndex = 36220;

	class QueryLeaderboardUserScoresOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* _UserIds_k__BackingField; // 0x10
		::Il2CppArray<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*>* _StatInfo_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
		::System::Nullable_1<::System::DateTimeOffset> _StartTime_k__BackingField; // 0x28
		::System::Nullable_1<::System::DateTimeOffset> _EndTime_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* get_UserIds()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_USERIDS_OFFSET))(this);
		}

		::System::Void set_UserIds(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_USERIDS_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*>* get_StatInfo()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_STATINFO_OFFSET))(this);
		}

		::System::Void set_StatInfo(::Il2CppArray<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_STATINFO_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_StartTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_STARTTIME_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_EndTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_ENDTIME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
