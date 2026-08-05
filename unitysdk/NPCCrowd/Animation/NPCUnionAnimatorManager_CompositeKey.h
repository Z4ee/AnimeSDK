#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_COMPOSITEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x826840)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_COMPOSITEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8268A0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_COMPOSITEKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8268F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCUnionAnimatorManager_CompositeKey_TypeDefinitionIndex = 61914;

	struct alignas(4) NPCUnionAnimatorManager_CompositeKey
	{
		::System::Int32 OuterKey; // 0x10
		::System::Int32 InnerKey; // 0x14

		::System::Boolean Equals(::NPCCrowd::Animation::NPCUnionAnimatorManager_CompositeKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCUnionAnimatorManager_CompositeKey))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_COMPOSITEKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_COMPOSITEKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_COMPOSITEKEY___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
