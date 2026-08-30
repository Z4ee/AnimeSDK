#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DeformSourceMode_TypeDefinitionIndex = 70817;

	enum class DeformSourceMode : ::System::Int32
	{
		None = 0,
		QuadDeform = 1,
		LinearDeform = 2,
	};
}
