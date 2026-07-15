#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AliveStateMask_TypeDefinitionIndex = 10150;

	enum class AliveStateMask : ::System::UInt16
	{
		NoOne = 0x0,
		Anyone = 0xFFFF,
		Bit_Alive = 0x1,
		Bit_Limbo = 0x2,
		Bit_LimboRevivable = 0x4,
		Bit_Deathrattle = 0x8,
		Bit_Dying = 0x10,
		Bit_Died = 0x20,
		Bit_WillBeDestroy = 0x40,
		Bit_Destroyed = 0x80,
		Bit_OnStage = 0x100,
		Bit_UnStage = 0x200,
		Mask_AliveOnly = 0x1,
		Mask_LimboOnly = 0xE,
		Mask_DiedButNotDispose = 0x30,
		Mask_AliveOrLimbo = 0xF,
		Mask_AliveOrRevivable = 0x5,
		Mask_LimboOrDead = 0x3E,
		Mask_NotDestroyed = 0x3F,
		Mask_AliveStateCheck = 0xFF,
		Mask_StageCheck = 0x300,
	};
}
