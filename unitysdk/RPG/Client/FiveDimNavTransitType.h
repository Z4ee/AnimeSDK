#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimNavTransitType_TypeDefinitionIndex = 61300;

	enum class FiveDimNavTransitType : ::System::Int32
	{
		Default = 0,
		Teleport = 1,
		CrossTeleport = 2,
	};
}
