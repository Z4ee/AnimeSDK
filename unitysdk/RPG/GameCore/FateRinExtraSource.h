#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinExtraSource_TypeDefinitionIndex = 53441;

	enum class FateRinExtraSource : ::System::Byte
	{
		Self = 0x0,
		Attacker = 0x1,
		Count = 0x2,
	};
}
