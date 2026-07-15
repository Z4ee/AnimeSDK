#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionDelayChangeReasonMask_TypeDefinitionIndex = 23867;

	enum class ActionDelayChangeReasonMask : ::System::UInt16
	{
		None = 0x0,
		All = 0xFFFF,
		Bit_Default = 0x1,
		Bit_Advance = 0x2,
		Bit_ActionEnd = 0x4,
		Bit_AllReset = 0x8,
		Bit_Link = 0x10,
		Bit_TaskReset = 0x20,
		Bit_ImmediateAction = 0x40,
		Bit_SpeedChange = 0x80,
		Mask_TurnBasedAdvance = 0xE,
	};
}
