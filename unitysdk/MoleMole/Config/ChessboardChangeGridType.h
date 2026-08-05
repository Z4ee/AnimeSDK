#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardChangeGridType_TypeDefinitionIndex = 44921;

	enum class ChessboardChangeGridType : ::System::Int32
	{
		ResetGrid = 0,
		ChangeGridDirectly = 1,
		Diffusion = 3,
		SinkAllThenRiseAll = 2,
	};
}
