#pragma once
#include "unitysdk/unitysdk.h"

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int EntityIndexType_TypeDefinitionIndex = 10022;

	enum class EntityIndexType : ::System::Int32
	{
		EntityIndex = 0,
		PrimaryEntityIndex = 1,
	};
}
