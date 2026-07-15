#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SaveCharacterStateMask_TypeDefinitionIndex = 23786;

	enum class SaveCharacterStateMask : ::System::UInt32
	{
		None = 0x0,
		All = 0xFFFFFFFF,
		HP = 0x1,
		SP = 0x2,
		Stance = 0x4,
		BP = 0x8,
		Status = 0x10,
	};
}
