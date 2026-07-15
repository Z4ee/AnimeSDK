#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int SolutionPriority_TypeDefinitionIndex = 40473;

	enum class SolutionPriority : ::System::Int32
	{
		Invalid = 0,
		Default = 1,
		FourBreak = 2,
		FiveBreak = 3,
		FourFourSwap = 4,
		MultiBreak = 5,
		MultiFourSwap = 6,
		MultiMultiSwap = 7,
	};
}
