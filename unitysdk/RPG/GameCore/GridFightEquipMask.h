#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipMask_TypeDefinitionIndex = 24351;

	enum class GridFightEquipMask : ::System::UInt16
	{
		None = 0x0,
		Bit_Normal = 0x1,
		Bit_Hack = 0x2,
		Bit_CopyEquip = 0x4,
		Mask_Default = 0x5,
	};
}
