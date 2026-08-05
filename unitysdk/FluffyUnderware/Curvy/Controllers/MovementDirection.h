#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int MovementDirection_TypeDefinitionIndex = 39485;

	enum class MovementDirection : ::System::Int32
	{
		Backward = 1,
		Forward = 0,
	};
}
