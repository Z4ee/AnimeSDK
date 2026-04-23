#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AntialiasingMode_TypeDefinitionIndex = 62613;

	enum class AntialiasingMode : ::System::Int32
	{
		Off = 0,
		TAA = 1,
		FXAA = 2,
	};
}
