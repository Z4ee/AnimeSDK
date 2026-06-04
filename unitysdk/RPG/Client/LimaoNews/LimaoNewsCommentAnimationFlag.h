#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsCommentAnimationFlag_TypeDefinitionIndex = 73859;

	enum class LimaoNewsCommentAnimationFlag : ::System::Int32
	{
		None = 1,
		AddFadeIn = 2,
		BlockFadeIn = 4,
	};
}
