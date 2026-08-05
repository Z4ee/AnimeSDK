#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_ROTATIONSELECTOR_COMPARE_OFFSET UNITYSDK_OFFSET(0xA81580)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_ROTATIONSELECTOR_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x7F6AD0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_ROTATIONSELECTOR_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x7F6AC0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_ROTATIONSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x7F69D0)

namespace PipelineCamera::Blender
{
	inline static constexpr unsigned int AimingCameraDataBlender_RotationSelector_TypeDefinitionIndex = 38648;

	struct alignas(4) AimingCameraDataBlender_RotationSelector
	{
		::System::Single _targetYaw; // 0x10
		::System::Single _minPitch; // 0x14
		::System::Single _maxPitch; // 0x18

		/*
		::System::Void _ctor(::UnityEngine::Quaternion targetRotation, ::System::Single minPitch, ::System::Single maxPitch)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_ROTATIONSELECTOR__CTOR_OFFSET))(this, targetRotation, minPitch, maxPitch);
		}
		*/

		/*
		::UnityEngine::Quaternion Compare(::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> left, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> right)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_ROTATIONSELECTOR_COMPARE_OFFSET))(this, left, right);
		}
		*/

		::System::Double get_MinPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_ROTATIONSELECTOR_GET_MINPITCH_OFFSET))(this);
		}

		::System::Double get_MaxPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_ROTATIONSELECTOR_GET_MAXPITCH_OFFSET))(this);
		}
	};
}
