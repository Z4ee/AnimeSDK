#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONS_GET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1A4E9340)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONS_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1A4E9350)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E9360)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int GetLeaderboardUserScoreCountOptions_TypeDefinitionIndex = 34241;

	class GetLeaderboardUserScoreCountOptions : public ::System::Object
	{
	public:
		::System::String* _StatName_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_StatName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONS_GET_STATNAME_OFFSET))(this);
		}

		::System::Void set_StatName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONS_SET_STATNAME_OFFSET))(this, value);
		}
	};
}
