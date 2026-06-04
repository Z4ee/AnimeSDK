#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsStatus_TypeDefinitionIndex = 73267;

	enum class PadsStatus : ::System::Int32
	{
		Init = 0,
		PreProcess = 1,
		WaitForSolving = 2,
		PuzzleSolving = 3,
		Completed = 4,
	};
}
