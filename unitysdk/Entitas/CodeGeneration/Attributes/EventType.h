#pragma once
#include "unitysdk/unitysdk.h"

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int EventType_TypeDefinitionIndex = 10026;

	enum class EventType : ::System::Int32
	{
		Added = 0,
		Removed = 1,
	};
}
