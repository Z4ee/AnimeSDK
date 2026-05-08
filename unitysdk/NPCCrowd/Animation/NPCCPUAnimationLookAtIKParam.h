#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONLOOKATIKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xF858C20)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationLookAtIKParam_TypeDefinitionIndex = 50425;

	class NPCCPUAnimationLookAtIKParam : public ::System::Object
	{
	public:
		::System::Single bodyWeight; // 0x10
		::System::Single headWeight; // 0x14
		::System::Single eyesWeight; // 0x18
		::System::Single clampWeight; // 0x1C
		::System::Single clampWeightHead; // 0x20
		::System::Single clampWeightEyes; // 0x24
		::System::Int32 clampSmoothing; // 0x28
		::UnityEngine::AnimationCurve* spineWeightCurve; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONLOOKATIKPARAM__CTOR_OFFSET))(this);
		}
	};
}
