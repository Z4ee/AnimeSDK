#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTreeTemplateType_TypeDefinitionIndex = 14825;

	enum class SkillTreeTemplateType : ::System::Int32
	{
		TYPE_NONE = 0,
		TYPE_INIT = 1,
		TYPE_MAX = 2,
		TYPE_CUSTOM = 3,
	};
}
