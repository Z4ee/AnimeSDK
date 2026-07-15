#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionActionType_TypeDefinitionIndex = 10079;

	enum class MissionActionType : ::System::Int32
	{
		Unknown = 0,
		Story = 1,
		Battle = 2,
		SwitchMap = 3,
	};
}
