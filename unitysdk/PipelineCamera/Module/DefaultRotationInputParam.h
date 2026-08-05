#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/EulerRotation.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUTPARAM_GET_ROTATIONINPUT_OFFSET UNITYSDK_OFFSET(0xA43F90)

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int DefaultRotationInputParam_TypeDefinitionIndex = 38658;

	struct alignas(8) DefaultRotationInputParam
	{
		::PipelineCamera::EulerRotation Rotation; // 0x10
		::UnityEngine::Vector3 RotationSpeed; // 0x58
		::System::Single DeltaTime; // 0x64

		/*
		::UnityEngine::Quaternion get_RotationInput()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUTPARAM_GET_ROTATIONINPUT_OFFSET))(this);
		}
		*/
	};
}
