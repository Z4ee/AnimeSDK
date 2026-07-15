#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PoseSwitcherType_TypeDefinitionIndex = 57893;

	enum class PoseSwitcherType : ::System::Int32
	{
		Inward = 0,
		Outward = 1,
	};
}
