#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA7B10)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int GetLeaderboardDefinitionCountOptions_TypeDefinitionIndex = 36459;

	class GetLeaderboardDefinitionCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
