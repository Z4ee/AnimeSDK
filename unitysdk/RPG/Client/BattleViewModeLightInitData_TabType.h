#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleViewModeLightInitData_TabType_TypeDefinitionIndex = 59042;

	enum class BattleViewModeLightInitData_TabType : ::System::Int32
	{
		None = 0,
		Detail = 1,
		Skill = 2,
		LightCone = 3,
	};
}
