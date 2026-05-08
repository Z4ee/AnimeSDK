#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int TriggeringDirections_TypeDefinitionIndex = 37284;

	enum class TriggeringDirections : ::System::Int32
	{
		All = 0,
		Forward = 1,
		Backward = 2,
	};
}
