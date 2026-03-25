#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PushHexColor_TypeDefinitionIndex = 64069;

	enum class PushHexColor : ::System::Int32
	{
		Red = 0,
		Blue = 1,
		Green = 2,
		Yellow = 3,
	};
}
