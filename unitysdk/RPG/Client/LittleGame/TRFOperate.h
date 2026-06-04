#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TRFOperate_TypeDefinitionIndex = 39451;

	enum class TRFOperate : ::System::Int32
	{
		None = 0,
		InputLeft = 1,
		InputRight = 2,
		InputUp = 3,
		InputDown = 4,
	};
}
