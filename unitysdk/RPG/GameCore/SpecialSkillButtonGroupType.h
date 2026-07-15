#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialSkillButtonGroupType_TypeDefinitionIndex = 15902;

	enum class SpecialSkillButtonGroupType : ::System::Int32
	{
		Unknown = 0,
		Default = 1,
		GodPhainon = 2,
		GodCyrene = 3,
		Sparxie = 4,
		HimekoNova = 5,
	};
}
