#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCGameplayTagActionRuntimeFragment_TypeDefinitionIndex = 58091;

	struct alignas(4) FNPCGameplayTagActionRuntimeFragment
	{
		::System::Boolean tagActionStateInited; // 0x10
		::System::UInt32 activeTagActionBits; // 0x14
	};
}
