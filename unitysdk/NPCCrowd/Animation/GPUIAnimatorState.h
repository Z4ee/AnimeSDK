#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_GPUIANIMATORSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x11942860)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int GPUIAnimatorState_TypeDefinitionIndex = 43101;

	class GPUIAnimatorState : public ::System::Object
	{
	public:
		::System::String* fullPathName; // 0x10
		::System::Int32 hashCode; // 0x18
		::System::Single cycleOffset; // 0x1C
		::System::Boolean isBlend; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUIANIMATORSTATE__CTOR_OFFSET))(this);
		}
	};
}
