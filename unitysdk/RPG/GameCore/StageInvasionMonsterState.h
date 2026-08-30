#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionMonsterState_TypeDefinitionIndex = 24492;

	enum class StageInvasionMonsterState : ::System::Int32
	{
		Normal = 0,
		Activated = 1,
		Disable = 2,
	};
}
