#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int TriggeringDirections_TypeDefinitionIndex = 39506;

	enum class TriggeringDirections : ::System::Int32
	{
		All = 0,
		Backward = 2,
		Forward = 1,
	};
}
