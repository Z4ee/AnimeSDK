#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/LogicArchetypeKey.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x50C5C0)
#define NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x50C5D0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationArchetypeKey_TypeDefinitionIndex = 81342;

	struct alignas(8) AnimationArchetypeKey
	{
		::NPCCrowd::Animation::LogicArchetypeKey LogicArchetypeKey; // 0x10
		::NPCCrowd::Animation::AnimationControllerInstanceConfig* Controller; // 0x18

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONARCHETYPEKEY___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
