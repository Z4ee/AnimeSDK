#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_GET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0xA2DC2F0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2DC310)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_SET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0xA2DC300)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2DC320)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DC330)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int QueryLeaderboardRanksOptions_TypeDefinitionIndex = 42847;

	class QueryLeaderboardRanksOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _LeaderboardId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_LeaderboardId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_GET_LEADERBOARDID_OFFSET))(this);
		}

		::System::Void set_LeaderboardId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_SET_LEADERBOARDID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
