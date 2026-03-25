#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONS_GET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x86658F0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONS_SET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x8665900)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8665910)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int CopyLeaderboardDefinitionByLeaderboardIdOptions_TypeDefinitionIndex = 36180;

	class CopyLeaderboardDefinitionByLeaderboardIdOptions : public ::System::Object
	{
	public:
		::System::String* _LeaderboardId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_LeaderboardId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONS_GET_LEADERBOARDID_OFFSET))(this);
		}

		::System::Void set_LeaderboardId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONS_SET_LEADERBOARDID_OFFSET))(this, value);
		}
	};
}
