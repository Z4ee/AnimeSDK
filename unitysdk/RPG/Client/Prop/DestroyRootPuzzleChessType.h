#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DestroyRootPuzzleChessType_TypeDefinitionIndex = 72045;

	enum class DestroyRootPuzzleChessType : ::System::Int32
	{
		None = 0,
		Launcher = 1,
		Refractor = 2,
		Core = 3,
		Block = 4,
	};
}
