#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCheckPointType_TypeDefinitionIndex = 10769;

	enum class ClockParkCheckPointType : ::System::Int32
	{
		AttrGreaterEqual = 1,
		AttrSumGreaterEqual = 2,
		CheckTypeNone = 3,
		OwnBuff = 4,
	};
}
