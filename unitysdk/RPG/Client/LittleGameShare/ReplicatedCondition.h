#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicatedCondition_TypeDefinitionIndex = 35326;

	enum class ReplicatedCondition : ::System::Byte
	{
		None = 0x0,
		InitialOnly = 0x1,
		OwnerOnly = 0x2,
		SkipOwner = 0x3,
		InitialOrOwner = 0x4,
	};
}
