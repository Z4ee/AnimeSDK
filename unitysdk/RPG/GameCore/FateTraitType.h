#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTraitType_TypeDefinitionIndex = 11110;

	enum class FateTraitType : ::System::Int32
	{
		Clazz = 1,
		Skill = 2,
	};
}
