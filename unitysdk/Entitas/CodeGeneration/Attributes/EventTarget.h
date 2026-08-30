#pragma once
#include "unitysdk/unitysdk.h"

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int EventTarget_TypeDefinitionIndex = 10025;

	enum class EventTarget : ::System::Int32
	{
		Any = 0,
		Self = 1,
	};
}
