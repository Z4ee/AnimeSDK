#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_ESlot_TypeDefinitionIndex = 54655;

	enum class CharacterOutfitComponent_ESlot : ::System::UInt64
	{
		None = 0x0,
		HeadDecor = 0x800,
		Other = 0xFFFFFFFFFFFFF7FF,
		All = 0xFFFFFFFFFFFFFFFF,
	};
}
