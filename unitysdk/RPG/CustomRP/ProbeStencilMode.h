#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ProbeStencilMode_TypeDefinitionIndex = 36137;

	enum class ProbeStencilMode : ::System::Int32
	{
		None = 0,
		AddStencil = 1,
		Rotation = 2,
	};
}
