#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadStateTransitionType_TypeDefinitionIndex = 16179;

	enum class PreloadStateTransitionType : ::System::Int32
	{
		SkillStart = 0,
		SkillEnd = 1,
	};
}
