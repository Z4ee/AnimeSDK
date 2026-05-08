#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationArchetypeKey.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_INSTANCEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x6327E0)
#define NPCCROWD_ANIMATION_INSTANCEKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x6327F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int InstanceKey_TypeDefinitionIndex = 78184;

	struct alignas(8) InstanceKey
	{
		::NPCCrowd::Animation::AnimationArchetypeKey AnimationArchetypeKey; // 0x10
		::System::Int32 InstanceIndex; // 0x20

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_INSTANCEKEY_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_INSTANCEKEY___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
