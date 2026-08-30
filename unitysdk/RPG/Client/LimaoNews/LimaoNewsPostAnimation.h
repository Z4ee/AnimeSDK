#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostAnimation_TypeDefinitionIndex = 79145;

	enum class LimaoNewsPostAnimation : ::System::Int32
	{
		None = 1,
		AddFadeIn = 2,
		BlockFadeIn = 4,
		RecommendFadeIn = 8,
		IncreaseLikeNum = 16,
		DecreaseLikeNum = 32,
	};
}
