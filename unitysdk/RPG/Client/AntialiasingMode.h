#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AntialiasingMode_TypeDefinitionIndex = 67920;

	enum class AntialiasingMode : ::System::Int32
	{
		Off = 0,
		TAA = 1,
		FXAA = 2,
	};
}
