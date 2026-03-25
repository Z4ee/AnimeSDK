#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/LeaderboardUserScoreInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x8668950)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_GET_USERID_OFFSET UNITYSDK_OFFSET(0x8668930)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_1_OFFSET UNITYSDK_OFFSET(0x8668B40)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_OFFSET UNITYSDK_OFFSET(0x8668970)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x8668960)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_USERID_OFFSET UNITYSDK_OFFSET(0x8668940)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x8668C50)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int LeaderboardUserScore_TypeDefinitionIndex = 36201;

	class LeaderboardUserScore : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _UserId_k__BackingField; // 0x10
		::System::Int32 _Score_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_USERID_OFFSET))(this, value);
		}

		::System::Int32 get_Score()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_SCORE_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_1_OFFSET))(this, other);
		}
	};
}
