#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UVMode_TypeDefinitionIndex = 65088;

	enum class UVMode : ::System::Int32
	{
		U = 0,
		V = 1,
	};
}
