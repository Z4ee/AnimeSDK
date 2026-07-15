#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillInputType_TypeDefinitionIndex = 10108;

	enum class SkillInputType : ::System::Int32
	{
		None = 0,
		ButtonPress = 1,
		ButtonRelease = 2,
		ButtonClick = 4,
	};
}
