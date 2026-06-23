#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooPlayType_TypeDefinitionIndex = 46463;

	enum class BangbooPlayType : ::System::Int32
	{
		PartyGame = 5,
		AbyssS2Interact = 4,
		BangKov = 8,
		SearchTarget = 2,
		PlatformerIntro = 1,
		Platformer2_0 = 6,
		Platformer = 3,
		MechBoo = 7,
		None = 0,
	};
}
