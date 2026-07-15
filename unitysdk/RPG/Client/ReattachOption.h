#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ReattachOption_TypeDefinitionIndex = 66961;

	enum class ReattachOption : ::System::Int32
	{
		Unkown = 0,
		LocalPlayer = 1,
	};
}
