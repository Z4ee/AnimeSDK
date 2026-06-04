#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ProbeBlendFlag_TypeDefinitionIndex = 35355;

	enum class ProbeBlendFlag : ::System::Int32
	{
		BlendOneZero = 0,
		BlendOneOne = 1,
	};
}
