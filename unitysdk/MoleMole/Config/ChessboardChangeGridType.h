#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardChangeGridType_TypeDefinitionIndex = 79717;

	enum class ChessboardChangeGridType : ::System::Int32
	{
		SinkAllThenRiseAll = 2,
		ResetGrid = 0,
		ChangeGridDirectly = 1,
		Diffusion = 3,
	};
}
