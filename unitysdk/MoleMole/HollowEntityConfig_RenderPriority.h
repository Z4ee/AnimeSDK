#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_RenderPriority_TypeDefinitionIndex = 40469;

	enum class HollowEntityConfig_RenderPriority : ::System::Int32
	{
		MiniGameBG = 4,
		Player = 2,
		GridEvent = 3,
		Alert = 5,
		Npc = 1,
		Default = 0,
	};
}
