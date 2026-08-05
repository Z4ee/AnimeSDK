#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_RenderPriority_TypeDefinitionIndex = 68294;

	enum class HollowEntityConfig_RenderPriority : ::System::Int32
	{
		MiniGameBG = 4,
		Alert = 5,
		GridEvent = 3,
		Player = 2,
		Npc = 1,
		Default = 0,
	};
}
