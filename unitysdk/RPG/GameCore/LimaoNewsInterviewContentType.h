#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsInterviewContentType_TypeDefinitionIndex = 13415;

	enum class LimaoNewsInterviewContentType : ::System::Int32
	{
		None = 0,
		Text = 1,
		Line = 2,
		Image = 3,
		ChapterTitle = 4,
		GrayFrameText = 5,
		WhiteFrameText = 6,
	};
}
