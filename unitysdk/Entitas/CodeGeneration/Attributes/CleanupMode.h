#pragma once
#include "unitysdk/unitysdk.h"

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int CleanupMode_TypeDefinitionIndex = 9759;

	enum class CleanupMode : ::System::Int32
	{
		RemoveComponent = 0,
		DestroyEntity = 1,
	};
}
