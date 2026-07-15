#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillDamageRange_TypeDefinitionIndex = 10058;

	enum class SkillDamageRange : ::System::Int32
	{
		Unknow = 0,
		One = 1,
		Spread = 2,
		All = 3,
	};
}
