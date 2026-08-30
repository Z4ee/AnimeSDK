#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/LeaderboardUserScoreInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xB37B660)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_GET_USERID_OFFSET UNITYSDK_OFFSET(0xB37B640)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_1_OFFSET UNITYSDK_OFFSET(0xB37B850)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_OFFSET UNITYSDK_OFFSET(0xB37B680)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xB37B670)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_USERID_OFFSET UNITYSDK_OFFSET(0xB37B650)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0xB37B970)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int LeaderboardUserScore_TypeDefinitionIndex = 45873;

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

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_USERID_OFFSET))(this, a1);
		}

		::System::Int32 get_Score()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_SCORE_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDUSERSCORE_SET_1_OFFSET))(this, a1);
		}
	};
}
