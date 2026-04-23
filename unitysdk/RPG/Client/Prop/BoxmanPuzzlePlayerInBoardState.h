#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzlePlayerInBoardState_TypeDefinitionIndex = 72340;

	enum class BoxmanPuzzlePlayerInBoardState : ::System::Int32
	{
		Unknown = 0,
		Inside = 1,
		Outside = 2,
	};
}
