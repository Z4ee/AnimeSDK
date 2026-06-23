#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/EMontageEndBehavior.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCMontageLayerFragment_TypeDefinitionIndex = 65322;

	struct alignas(4) FNPCMontageLayerFragment
	{
		::System::Int32 montageKey; // 0x10
		::System::Boolean montagePlayFlag; // 0x14
		::System::Single montageLength; // 0x18
		::System::Single montageTimer; // 0x1C
		::System::Boolean isLoop; // 0x20
		::NPCCrowd::Ability::EMontageEndBehavior endBehavior; // 0x24
		::System::Single blendTime; // 0x28
		::System::Single montagePlaySpeed; // 0x2C
		::System::Boolean montagePlaySpeedDirty; // 0x30
		::System::Single montagePlayTime; // 0x34
	};
}
