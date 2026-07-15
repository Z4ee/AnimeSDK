#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBlackboardResultHandleTime_TypeDefinitionIndex = 64129;

	enum class RogueBlackboardResultHandleTime : ::System::Int32
	{
		PreProcess = 0,
		PostProcess = 1,
	};
}
