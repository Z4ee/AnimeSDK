#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONS_GET_USERID_OFFSET UNITYSDK_OFFSET(0x8665D50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONS_SET_USERID_OFFSET UNITYSDK_OFFSET(0x8665D60)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8665D70)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int CopyLeaderboardRecordByUserIdOptions_TypeDefinitionIndex = 36184;

	class CopyLeaderboardRecordByUserIdOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _UserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONS_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONS_SET_USERID_OFFSET))(this, value);
		}
	};
}
