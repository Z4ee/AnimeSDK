#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RenderSelectMode_TypeDefinitionIndex = 57548;

	enum class RenderSelectMode : ::System::Int32
	{
		Normal = 0,
		Capture = 1,
	};
}
