#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LoopStyle_TypeDefinitionIndex = 84515;

	enum class LoopStyle : ::System::Int32
	{
		Loop = 1,
		PingPong = 2,
		Once = 0,
	};
}
