#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillActualAttackerType_TypeDefinitionIndex = 17465;

	enum class SkillActualAttackerType : ::System::Int32
	{
		Self = 0,
		Servant = 1,
		None = 2,
	};
}
