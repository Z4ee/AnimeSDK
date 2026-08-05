#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/LogicArchetypeKey.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x5A2AD0)
#define NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x5A2AB0)
#define NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5A2AE0)
#define NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x5A2AF0)
#define NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5A2B60)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationArchetypeKey_TypeDefinitionIndex = 71753;

	struct alignas(8) AnimationArchetypeKey
	{
		::NPCCrowd::Animation::LogicArchetypeKey LogicArchetypeKey; // 0x10
		::NPCCrowd::Animation::AnimationControllerInstanceConfig* Controller; // 0x18

		::System::Boolean Equals(::NPCCrowd::Animation::AnimationArchetypeKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationArchetypeKey))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
