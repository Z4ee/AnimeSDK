#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestType_TypeDefinitionIndex = 16389;

	enum class EQuestType : ::System::Int16
	{
		Hollow = 3,
		DungeonInner = 2,
		Manual = 4,
		Knowledge = 8,
		ArchiveBattle = 7,
		ArchiveFile = 1,
		HollowChallenge = 6,
		Daily = 9,
		MainCity = 5,
	};
}
