#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AULinePointMod_TypeDefinitionIndex = 72419;

	enum class AULinePointMod : ::System::Int32
	{
		Nothing = 0,
		Start = 1,
		End = 2,
		Both = 3,
	};
}
