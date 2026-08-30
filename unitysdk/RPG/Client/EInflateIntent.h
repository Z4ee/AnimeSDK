#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EInflateIntent_TypeDefinitionIndex = 68644;

	enum class EInflateIntent : ::System::Int32
	{
		None = 0,
		Charge = 1,
		Discharge = 2,
	};
}
