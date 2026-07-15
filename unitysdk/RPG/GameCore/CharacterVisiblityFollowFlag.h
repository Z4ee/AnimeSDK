#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisiblityFollowFlag_TypeDefinitionIndex = 23778;

	enum class CharacterVisiblityFollowFlag : ::System::UInt16
	{
		None = 0x0,
		FollowVisible = 0x1,
		FollowInvisible = 0x2,
		TransmitVisible = 0x4,
		TransmitInvisible = 0x8,
		Follow = 0x3,
		Transmit = 0xC,
	};
}
