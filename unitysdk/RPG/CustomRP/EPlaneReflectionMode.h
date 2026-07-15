#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int EPlaneReflectionMode_TypeDefinitionIndex = 36102;

	enum class EPlaneReflectionMode : ::System::Int32
	{
		None = 0,
		Bound = 1,
		Blur = 2,
	};
}
