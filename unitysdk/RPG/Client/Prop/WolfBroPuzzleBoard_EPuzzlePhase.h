#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WolfBroPuzzleBoard_EPuzzlePhase_TypeDefinitionIndex = 78219;

	enum class WolfBroPuzzleBoard_EPuzzlePhase : ::System::Int32
	{
		None = 0,
		Startup = 1,
		Activity = 2,
		Shutdown = 3,
	};
}
