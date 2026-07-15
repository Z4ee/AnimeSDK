#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatQuickFunctionType_TypeDefinitionIndex = 60495;

	enum class PamChatQuickFunctionType : ::System::Int32
	{
		None = 0,
		AvatarEnhance = 1,
		LightConeRecommend = 2,
		TeamRecommend = 3,
		RelicRecommend = 4,
		MaterialFarming = 5,
		RelicRating = 6,
		AvatarGuide = 7,
		CheckReward = 8,
	};
}
