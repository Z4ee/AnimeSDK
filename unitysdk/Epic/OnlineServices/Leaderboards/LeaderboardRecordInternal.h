#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Leaderboards { class LeaderboardRecord; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x44FC0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_RANK_OFFSET UNITYSDK_OFFSET(0x68F0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x6900)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_USERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x44DE0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_USERID_OFFSET UNITYSDK_OFFSET(0x44CB0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x44F50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x44F40)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_RANK_OFFSET UNITYSDK_OFFSET(0x26F0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x6910)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_USERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x44E90)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x44D20)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int LeaderboardRecordInternal_TypeDefinitionIndex = 42026;

	struct alignas(8) LeaderboardRecordInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserId; // 0x18
		::System::UInt32 m_Rank; // 0x20
		::System::Int32 m_Score; // 0x24
		::System::IntPtr m_UserDisplayName; // 0x28

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_USERID_OFFSET))(this, value);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_RANK_OFFSET))(this, value);
		}

		::System::Int32 get_Score()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_SCORE_OFFSET))(this, value);
		}

		::System::String* get_UserDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_USERDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_UserDisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_USERDISPLAYNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::LeaderboardRecord* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::LeaderboardRecord*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
