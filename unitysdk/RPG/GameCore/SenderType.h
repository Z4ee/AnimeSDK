#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SenderType_TypeDefinitionIndex = 13868;

	enum class SenderType : ::System::Int32
	{
		None = 0,
		NPC = 1,
		Player = 2,
		PlayerAuto = 3,
		System = 4,
	};
}
