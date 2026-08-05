#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityFollowBehavioursDefine_TypeDefinitionIndex = 41562;

	struct alignas(4) NPCAbilityFollowBehavioursDefine
	{
		::System::Single FollowSlowDistance; // 0x10
		::System::Single FollowStartDistance; // 0x14
		::System::Single BlockSlowDistance; // 0x18
		::System::Single Acceleration; // 0x1C
		::System::Single Size; // 0x20
		::System::Single PassDistance; // 0x24
		::System::Single PassSpeed; // 0x28
	};
}
