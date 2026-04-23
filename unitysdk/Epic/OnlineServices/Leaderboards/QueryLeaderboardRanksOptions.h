#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_GET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x8EA10A0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8EA10C0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_SET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x8EA10B0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8EA10D0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA10E0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int QueryLeaderboardRanksOptions_TypeDefinitionIndex = 42044;

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

		::System::Void set_LeaderboardId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_SET_LEADERBOARDID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDRANKSOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
