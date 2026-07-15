#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int NewsTickerViewportCheckResult_TypeDefinitionIndex = 65909;

	enum class NewsTickerViewportCheckResult : ::System::Int32
	{
		Inside = 0,
		BeforeMoveIn = 1,
		AfterMoveOut = 2,
	};
}
