#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideViewType_TypeDefinitionIndex = 65196;

	enum class TutorialGuideViewType : ::System::Int32
	{
		None = 0,
		TopCenterTip = 1,
		CommonCenterTalk = 2,
	};
}
