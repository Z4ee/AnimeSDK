#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoUIMarquee_MarqueeType_TypeDefinitionIndex = 67683;

	enum class MonoUIMarquee_MarqueeType : ::System::Int32
	{
		None = 0,
		Circle = 1,
		BackAndForth = 2,
	};
}
