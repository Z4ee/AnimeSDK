#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define NPCCROWD_ANIMATION_GPUIROOTMOTION_HASMOTION_OFFSET UNITYSDK_OFFSET(0x490C80)
#define NPCCROWD_ANIMATION_GPUIROOTMOTION_ISPOSITIONONLY_OFFSET UNITYSDK_OFFSET(0x490CD0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int GPUIRootMotion_TypeDefinitionIndex = 68126;

	struct alignas(4) GPUIRootMotion
	{
		::System::Int32 hasMotion; // 0x10
		::System::Int32 isPositionOnly; // 0x14
		::UnityEngine::Matrix4x4 motionMatrix; // 0x18

		::System::Boolean HasMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUIROOTMOTION_HASMOTION_OFFSET))(this);
		}

		::System::Boolean IsPositionOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUIROOTMOTION_ISPOSITIONONLY_OFFSET))(this);
		}
	};
}
