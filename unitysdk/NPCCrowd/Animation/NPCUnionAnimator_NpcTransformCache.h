#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_NPCTRANSFORMCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0xF4008C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCUnionAnimator_NpcTransformCache_TypeDefinitionIndex = 64858;

	class NPCUnionAnimator_NpcTransformCache : public ::System::Object
	{
	public:
		::UnityEngine::Transform* CpuTransform; // 0x10
		::System::Int32 GpuTransformIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_NPCTRANSFORMCACHE__CTOR_OFFSET))(this);
		}
	};
}
