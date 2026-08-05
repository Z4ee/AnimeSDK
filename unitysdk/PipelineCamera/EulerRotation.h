#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/Periodic_1.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_EULERROTATION_CREATE_OFFSET UNITYSDK_OFFSET(0x1EED2F20)
#define PIPELINECAMERA_EULERROTATION_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x3D1D70)
#define PIPELINECAMERA_EULERROTATION_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x44EB60)
#define PIPELINECAMERA_EULERROTATION_GET_PITCH_OFFSET UNITYSDK_OFFSET(0x324CC0)
#define PIPELINECAMERA_EULERROTATION_GET_ROLL_OFFSET UNITYSDK_OFFSET(0x66AB30)
#define PIPELINECAMERA_EULERROTATION_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA81790)
#define PIPELINECAMERA_EULERROTATION_GET_YAW_OFFSET UNITYSDK_OFFSET(0x61E820)
#define PIPELINECAMERA_EULERROTATION_SET_PITCH_OFFSET UNITYSDK_OFFSET(0xA81760)
#define PIPELINECAMERA_EULERROTATION_SET_ROLL_OFFSET UNITYSDK_OFFSET(0xA81780)
#define PIPELINECAMERA_EULERROTATION_SET_YAW_OFFSET UNITYSDK_OFFSET(0xA81770)

namespace PipelineCamera
{
	inline static constexpr unsigned int EulerRotation_TypeDefinitionIndex = 38331;

	struct alignas(8) EulerRotation
	{
		::Foundation::Clamped_1<::System::Single> _pitch; // 0x10
		::Foundation::Periodic_1<::System::Single> _yaw; // 0x28
		::Foundation::Periodic_1<::System::Single> _roll; // 0x40

		/*
		static ::PipelineCamera::EulerRotation Create(::System::Single pitch, ::System::Single yaw, ::System::Single roll, ::System::Nullable_1<::System::Single> minPitch, ::System::Nullable_1<::System::Single> maxPitch)
		{
			return ((::PipelineCamera::EulerRotation(*)(::System::Single, ::System::Single, ::System::Single, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EULERROTATION_CREATE_OFFSET))(pitch, yaw, roll, minPitch, maxPitch);
		}
		*/

		::System::Single get_Pitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EULERROTATION_GET_PITCH_OFFSET))(this);
		}

		::System::Void set_Pitch(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EULERROTATION_SET_PITCH_OFFSET))(this, value);
		}

		::System::Single get_MinPitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EULERROTATION_GET_MINPITCH_OFFSET))(this);
		}

		::System::Single get_MaxPitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EULERROTATION_GET_MAXPITCH_OFFSET))(this);
		}

		::System::Single get_Yaw()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EULERROTATION_GET_YAW_OFFSET))(this);
		}

		::System::Void set_Yaw(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EULERROTATION_SET_YAW_OFFSET))(this, value);
		}

		::System::Single get_Roll()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EULERROTATION_GET_ROLL_OFFSET))(this);
		}

		::System::Void set_Roll(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EULERROTATION_SET_ROLL_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EULERROTATION_GET_ROTATION_OFFSET))(this);
		}
		*/
	};
}
