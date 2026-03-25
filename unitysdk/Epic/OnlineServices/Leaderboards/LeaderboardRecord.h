#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/LeaderboardRecordInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_GET_RANK_OFFSET UNITYSDK_OFFSET(0x8667E80)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x8667EA0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_GET_USERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x8667EC0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_GET_USERID_OFFSET UNITYSDK_OFFSET(0x8667E60)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_SET_1_OFFSET UNITYSDK_OFFSET(0x86682D0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_SET_OFFSET UNITYSDK_OFFSET(0x8667EE0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_SET_RANK_OFFSET UNITYSDK_OFFSET(0x8667E90)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x8667EB0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_SET_USERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x8667ED0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_SET_USERID_OFFSET UNITYSDK_OFFSET(0x8667E70)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x8668400)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int LeaderboardRecord_TypeDefinitionIndex = 36199;

	class LeaderboardRecord : public ::System::Object
	{
	public:
		::System::String* _UserDisplayName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _UserId_k__BackingField; // 0x18
		::System::Int32 _Score_k__BackingField; // 0x20
		::System::UInt32 _Rank_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_SET_USERID_OFFSET))(this, value);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_SET_RANK_OFFSET))(this, value);
		}

		::System::Int32 get_Score()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_SET_SCORE_OFFSET))(this, value);
		}

		::System::String* get_UserDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_GET_USERDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_UserDisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_SET_USERDISPLAYNAME_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORD_SET_1_OFFSET))(this, other);
		}
	};
}
