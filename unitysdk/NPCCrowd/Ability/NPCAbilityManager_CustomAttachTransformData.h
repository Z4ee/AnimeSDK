#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability { class NPCAbilityManager_CustomAttachTransformProvider; }

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityManager_CustomAttachTransformData_TypeDefinitionIndex = 78964;

	struct alignas(8) NPCAbilityManager_CustomAttachTransformData
	{
		::System::UInt32 EntityID; // 0x10
		::NPCCrowd::Ability::NPCAbilityManager_CustomAttachTransformProvider* Provider; // 0x18
	};
}
