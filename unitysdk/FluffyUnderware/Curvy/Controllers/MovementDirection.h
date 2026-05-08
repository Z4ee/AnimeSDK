#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int MovementDirection_TypeDefinitionIndex = 37276;

	enum class MovementDirection : ::System::Int32
	{
		Forward = 0,
		Backward = 1,
	};
}
