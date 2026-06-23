#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_RenderPriority_TypeDefinitionIndex = 70053;

	enum class HollowEntityConfig_RenderPriority : ::System::Int32
	{
		Npc = 1,
		GridEvent = 3,
		Player = 2,
		Alert = 5,
		Default = 0,
		MiniGameBG = 4,
	};
}
