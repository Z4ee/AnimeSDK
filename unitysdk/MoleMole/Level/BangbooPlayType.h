#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooPlayType_TypeDefinitionIndex = 64348;

	enum class BangbooPlayType : ::System::Int32
	{
		None = 0,
		Platformer = 3,
		Platformer2_0 = 6,
		MechBoo = 7,
		SearchTarget = 2,
		PlatformerIntro = 1,
		BangKov = 8,
		AbyssS2Interact = 4,
		PartyGame = 5,
	};
}
