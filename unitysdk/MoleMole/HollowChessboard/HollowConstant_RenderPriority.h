#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowConstant_RenderPriority_TypeDefinitionIndex = 81943;

	enum class HollowConstant_RenderPriority : ::System::Int32
	{
		InteractMovie = 5,
		NonInteract = 4,
		GridEvent = 3,
		InteractSecondaryMovie = 6,
		Npc = 1,
		Player = 2,
		Default = 0,
	};
}
