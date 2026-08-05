#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowConstant_RenderPriority_TypeDefinitionIndex = 76177;

	enum class HollowConstant_RenderPriority : ::System::Int32
	{
		Npc = 1,
		NonInteract = 4,
		InteractMovie = 5,
		Player = 2,
		InteractSecondaryMovie = 6,
		GridEvent = 3,
		Default = 0,
	};
}
