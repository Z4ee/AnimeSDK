#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FDRIStateMaskEnum_TypeDefinitionIndex = 16069;

	enum class FDRIStateMaskEnum : ::System::Int32
	{
		A = 1,
		B = 2,
		C = 4,
		D = 8,
		E = 16,
		F = 32,
		G = 64,
		H = 128,
		All = 255,
	};
}
