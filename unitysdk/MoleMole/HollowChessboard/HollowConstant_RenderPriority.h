#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowConstant_RenderPriority_TypeDefinitionIndex = 83595;

	enum class HollowConstant_RenderPriority : ::System::Int32
	{
		InteractMovie = 5,
		NonInteract = 4,
		Default = 0,
		Npc = 1,
		GridEvent = 3,
		Player = 2,
		InteractSecondaryMovie = 6,
	};
}
