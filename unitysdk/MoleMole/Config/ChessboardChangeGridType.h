#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardChangeGridType_TypeDefinitionIndex = 67378;

	enum class ChessboardChangeGridType : ::System::Int32
	{
		ResetGrid = 0,
		ChangeGridDirectly = 1,
		SinkAllThenRiseAll = 2,
		Diffusion = 3,
	};
}
