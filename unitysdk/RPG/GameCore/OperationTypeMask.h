#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int OperationTypeMask_TypeDefinitionIndex = 10178;

	enum class OperationTypeMask : ::System::UInt16
	{
		None = 0x0,
		Mask_Full = 0xFFFF,
		Mask_NormalOp = 0x1,
		Mask_SetAutoBattle = 0x2,
		Mask_QuitBattle = 0x4,
		Mask_InsertUltraSkill = 0x8,
		Mask_SetComplexSkillAIConsiderUltra = 0x10,
		Mask_GM = 0x20,
		Mask_EvolveBuild = 0x40,
		Mask_Fate = 0x80,
		Mask_LevelGraph = 0x100,
		Mask_CustomUIOperate = 0x200,
		Mask_UIOperate = 0x31E,
		Mask_AutoCallNoGM = 0xFF1F,
		Mask_AutoCall = 0xFF3F,
		Mask_ExternalCall = 0xC0,
	};
}
