#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ProbeBlendFlag_TypeDefinitionIndex = 36136;

	enum class ProbeBlendFlag : ::System::Int32
	{
		BlendOneZero = 0,
		BlendOneOne = 1,
	};
}
