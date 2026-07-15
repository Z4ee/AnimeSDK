#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleNodeType_TypeDefinitionIndex = 18221;

	enum class ChronicleNodeType : ::System::Int32
	{
		ChapterMain = 0,
		ChapterGap = 1,
		ChapterSide = 2,
		ChapterSingle = 3,
		ChapterToBeContinue = 4,
		MissionMain = 5,
		MissionSide = 6,
		WorldNode = 7,
		LineNode = 8,
		DotNode = 9,
		PenaconyEndmostEntry = 10,
	};
}
