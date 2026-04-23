#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E9B2B0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int GetLeaderboardRecordCountOptions_TypeDefinitionIndex = 42020;

	class GetLeaderboardRecordCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
