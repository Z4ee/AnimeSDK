#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideConfigType_TypeDefinitionIndex = 65188;

	enum class TutorialGuideConfigType : ::System::Int32
	{
		GuideHint = 0,
		GuideText = 1,
		GuideTalk = 2,
		GuideSwipeAToB = 3,
		GuideTalkDialog = 4,
		GuideWeak = 5,
	};
}
