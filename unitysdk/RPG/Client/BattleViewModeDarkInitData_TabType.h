#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleViewModeDarkInitData_TabType_TypeDefinitionIndex = 59044;

	enum class BattleViewModeDarkInitData_TabType : ::System::Int32
	{
		None = 0,
		Detail = 1,
		Skill = 2,
		Story = 3,
		Guide = 4,
	};
}
