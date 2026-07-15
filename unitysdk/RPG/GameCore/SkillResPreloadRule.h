#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillResPreloadRule_TypeDefinitionIndex = 17457;

	enum class SkillResPreloadRule : ::System::Int32
	{
		Default = 0,
		Load = 1,
		Manual = 2,
	};
}
