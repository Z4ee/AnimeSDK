#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONLOOKCONTROLLERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x11370070)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationLookControllerParam_TypeDefinitionIndex = 64862;

	class NPCCPUAnimationLookControllerParam : public ::System::Object
	{
	public:
		::System::Single pitchUp; // 0x10
		::System::Single pitchDown; // 0x14
		::System::Single yawLeft; // 0x18
		::System::Single yawRight; // 0x1C
		::System::Single speedOnGetTarget; // 0x20
		::System::Single speedOnChangeTarget; // 0x24
		::System::Single speedOnMissTarget; // 0x28
		::System::Single speedOnLockTarget; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONLOOKCONTROLLERPARAM__CTOR_OFFSET))(this);
		}
	};
}
