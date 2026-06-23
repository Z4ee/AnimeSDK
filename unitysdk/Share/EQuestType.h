#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestType_TypeDefinitionIndex = 12938;

	enum class EQuestType : ::System::Int16
	{
		Manual = 4,
		HollowChallenge = 6,
		Knowledge = 8,
		ArchiveFile = 1,
		MainCity = 5,
		DungeonInner = 2,
		ArchiveBattle = 7,
		Hollow = 3,
		Daily = 9,
	};
}
