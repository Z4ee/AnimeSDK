#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorDefaultValueConfigure_EDefaultValueFlag_TypeDefinitionIndex = 55943;

	enum class MonoAnimatorDefaultValueConfigure_EDefaultValueFlag : ::System::Int32
	{
		None = 0,
		Position = 1,
		Rotation = 2,
		Scale = 4,
	};
}
