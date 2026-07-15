#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateData_TypeDefinitionIndex = 42620;

	struct alignas(4) CameraStateData
	{
		::System::Single Fov; // 0x10
		::System::Single NearClipPlane; // 0x14
		::System::Single Dutch; // 0x18
		::UnityEngine::Vector3 Up; // 0x1C
		::UnityEngine::Vector3 Position; // 0x28
		::UnityEngine::Quaternion Orientation; // 0x34
		::UnityEngine::Vector3 Spherical; // 0x44
		::UnityEngine::Vector3 LookAt; // 0x50
		::UnityEngine::Vector3 TargetForward; // 0x5C
		::UnityEngine::Vector3 Forward; // 0x68
		::System::Single ForwardPoleDeltaAngle; // 0x74
		::System::Single ForwardElevDeltaAngle; // 0x78
	};
}
