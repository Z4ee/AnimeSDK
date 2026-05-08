#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_COMPOSITEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x68DC40)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_COMPOSITEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x68DCA0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_COMPOSITEKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x68DCF0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCUnionAnimatorManager_CompositeKey_TypeDefinitionIndex = 80914;

	struct alignas(4) NPCUnionAnimatorManager_CompositeKey
	{
		::System::Int32 OuterKey; // 0x10
		::System::Int32 InnerKey; // 0x14

		::System::Boolean Equals(::NPCCrowd::Accessories::NPCUnionAnimatorManager_CompositeKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Accessories::NPCUnionAnimatorManager_CompositeKey))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_COMPOSITEKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_COMPOSITEKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_COMPOSITEKEY___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
