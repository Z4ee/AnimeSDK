#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeGroupStatisticsData_ChallengeGroupStatisticLineup_TypeDefinitionIndex = 60341;

	struct alignas(8) ChallengeGroupStatisticsData_ChallengeGroupStatisticLineup
	{
		::Il2CppArray<::System::UInt32>* AvatarIDs; // 0x10
		::Il2CppArray<::System::UInt32>* AvatarLevels; // 0x18
		::Il2CppArray<::System::UInt32>* AvatarSkins; // 0x20
	};
}
