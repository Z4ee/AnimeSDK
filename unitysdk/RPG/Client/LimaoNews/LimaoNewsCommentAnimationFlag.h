#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsCommentAnimationFlag_TypeDefinitionIndex = 75510;

	enum class LimaoNewsCommentAnimationFlag : ::System::Int32
	{
		None = 1,
		AddFadeIn = 2,
		BlockFadeIn = 4,
	};
}
