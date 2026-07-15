#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkChapterType_TypeDefinitionIndex = 10765;

	enum class ClockParkChapterType : ::System::Int32
	{
		NormalChapter = 0,
		TrueEnding = 1,
		FalseEnding = 2,
		LoopChapter = 3,
	};
}
