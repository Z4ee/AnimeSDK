#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONS_GET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0xA2D5740)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONS_SET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0xA2D5750)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2D5760)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int CopyLeaderboardDefinitionByLeaderboardIdOptions_TypeDefinitionIndex = 42809;

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

		::System::Void set_LeaderboardId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDIDOPTIONS_SET_LEADERBOARDID_OFFSET))(this, a1);
		}
	};
}
