#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillUseResult_TypeDefinitionIndex = 51590;

	enum class RtSkillUseResult : ::System::Int32
	{
		Success = 0,
		Failed = 1,
		Pending = 2,
	};
}
