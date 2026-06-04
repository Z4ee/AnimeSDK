#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Leaderboards { class UserScoresQueryStatInfo; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xA2DC890)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2DC8C0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xA2DC860)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_STATINFO_OFFSET UNITYSDK_OFFSET(0xA2DC840)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_USERIDS_OFFSET UNITYSDK_OFFSET(0xA2DC820)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xA2DC8B0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2DC8D0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xA2DC880)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_STATINFO_OFFSET UNITYSDK_OFFSET(0xA2DC850)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_USERIDS_OFFSET UNITYSDK_OFFSET(0xA2DC830)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DC8E0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int QueryLeaderboardUserScoresOptions_TypeDefinitionIndex = 42849;

	class QueryLeaderboardUserScoresOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* _UserIds_k__BackingField; // 0x18
		::Il2CppArray<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*>* _StatInfo_k__BackingField; // 0x20
		::System::Nullable_1<::System::DateTimeOffset> _EndTime_k__BackingField; // 0x28
		::System::Nullable_1<::System::DateTimeOffset> _StartTime_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* get_UserIds()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_USERIDS_OFFSET))(this);
		}

		::System::Void set_UserIds(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_USERIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*>* get_StatInfo()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_STATINFO_OFFSET))(this);
		}

		::System::Void set_StatInfo(::Il2CppArray<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_STATINFO_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_StartTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_STARTTIME_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_EndTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_ENDTIME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDUSERSCORESOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
