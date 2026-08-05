#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONS_GET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1C2B5940)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONS_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1C2B5920)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONS_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1C2B5950)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONS_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1C2B5930)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B5960)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int CopyLeaderboardUserScoreByUserIdOptions_TypeDefinitionIndex = 36455;

	class CopyLeaderboardUserScoreByUserIdOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _UserId_k__BackingField; // 0x10
		::System::String* _StatName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONS_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONS_SET_USERID_OFFSET))(this, value);
		}

		::System::String* get_StatName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONS_GET_STATNAME_OFFSET))(this);
		}

		::System::Void set_StatName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERIDOPTIONS_SET_STATNAME_OFFSET))(this, value);
		}
	};
}
