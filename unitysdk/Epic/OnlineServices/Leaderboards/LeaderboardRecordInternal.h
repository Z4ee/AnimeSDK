#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Leaderboards { class LeaderboardRecord; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C4C5C0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_RANK_OFFSET UNITYSDK_OFFSET(0x7845E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xF080)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_USERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x3C4C3D0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_USERID_OFFSET UNITYSDK_OFFSET(0x3C4C2A0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C4C540)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C4C530)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_RANK_OFFSET UNITYSDK_OFFSET(0x3A2C790)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xF090)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_USERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x3C4C480)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x3C4C310)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int LeaderboardRecordInternal_TypeDefinitionIndex = 45872;

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

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_USERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_RANK_OFFSET))(this, a1);
		}

		::System::Int32 get_Score()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_SCORE_OFFSET))(this, a1);
		}

		::System::String* get_UserDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_GET_USERDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_UserDisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_USERDISPLAYNAME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::LeaderboardRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::LeaderboardRecord*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDRECORDINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
