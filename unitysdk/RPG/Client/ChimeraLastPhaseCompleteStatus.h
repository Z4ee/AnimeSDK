#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraLastPhaseCompleteStatus_TypeDefinitionIndex = 60640;

	enum class ChimeraLastPhaseCompleteStatus : ::System::Int32
	{
		None = 0,
		Justsoso = 1,
		Complete = 2,
		Perfect = 3,
	};
}
