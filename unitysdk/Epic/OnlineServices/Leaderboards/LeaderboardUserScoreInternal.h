#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Leaderboards { class LeaderboardUserScore; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AB5DC0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x691EF0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_GET_USERID_OFFSET UNITYSDK_OFFSET(0x3AB5BA0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AB5DB0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AB5CD0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x38C6D30)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x3AB5C10)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int LeaderboardUserScoreInternal_TypeDefinitionIndex = 43692;

	struct alignas(8) LeaderboardUserScoreInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserId; // 0x18
		::System::Int32 m_Score; // 0x20

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_SET_USERID_OFFSET))(this, a1);
		}

		::System::Int32 get_Score()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_SET_SCORE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::LeaderboardUserScore* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::LeaderboardUserScore*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCOREINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
