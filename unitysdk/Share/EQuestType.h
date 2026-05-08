#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestType_TypeDefinitionIndex = 16753;

	enum class EQuestType : ::System::Int16
	{
		DungeonInner = 2,
		MainCity = 5,
		Knowledge = 8,
		Manual = 4,
		Daily = 9,
		HollowChallenge = 6,
		ArchiveBattle = 7,
		Hollow = 3,
		ArchiveFile = 1,
	};
}
