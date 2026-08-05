#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/EMontageEndBehavior.h"
#include "unitysdk/NPCCrowd/Animation/EMontageActiveRole.h"
#include "unitysdk/NPCCrowd/Animation/EMontageFallbackSource.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageFallbackState_TypeDefinitionIndex = 40945;

	struct alignas(4) MontageFallbackState
	{
		::System::Boolean hasFallback; // 0x10
		::System::Boolean enabled; // 0x11
		::System::Int32 montageKey; // 0x14
		::NPCCrowd::Ability::EMontageEndBehavior endBehavior; // 0x18
		::System::Single speed; // 0x1C
		::NPCCrowd::Animation::EMontageFallbackSource source; // 0x20
		::NPCCrowd::Animation::EMontageActiveRole activeRole; // 0x24
		::System::Int32 activeMontageKey; // 0x28
	};
}
