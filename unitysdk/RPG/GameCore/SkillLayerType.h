#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillLayerType_TypeDefinitionIndex = 53888;

	enum class SkillLayerType : ::System::Int32
	{
		Normal = 0,
		Parent = 1,
		Child = 2,
	};
}
