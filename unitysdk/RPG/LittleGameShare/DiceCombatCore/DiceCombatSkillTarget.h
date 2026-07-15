#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatSkillTarget_TypeDefinitionIndex = 34843;

	enum class DiceCombatSkillTarget : ::System::Int32
	{
		Self = 0,
		Enemy = 1,
	};
}
