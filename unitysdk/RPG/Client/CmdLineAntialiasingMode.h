#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CmdLineAntialiasingMode_TypeDefinitionIndex = 33778;

	enum class CmdLineAntialiasingMode : ::System::Int32
	{
		Off = 0,
		TAA = 1,
		FXAA = 2,
	};
}
