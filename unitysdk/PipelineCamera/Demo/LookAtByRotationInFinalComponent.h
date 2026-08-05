#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/RotateVectorPolicy.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define PIPELINECAMERA_DEMO_LOOKATBYROTATIONINFINALCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F9E71A0)
#define PIPELINECAMERA_DEMO_LOOKATBYROTATIONINFINALCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E71E0)
#define PIPELINECAMERA_DEMO_LOOKATBYROTATIONINFINALCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E7220)

namespace PipelineCamera::Demo
{
	inline static constexpr unsigned int LookAtByRotationInFinalComponent_TypeDefinitionIndex = 38413;

	class LookAtByRotationInFinalComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* _camera; // 0x18
		::System::Boolean _isCameraValid; // 0x20
		::UnityEngine::Transform* lookAt; // 0x28
		::UnityEngine::Vector2 lookAtScreenOffset; // 0x30
		::System::Single fieldOfView; // 0x38
		::Foundation::RotateVectorPolicy rotateType; // 0x3C
		::System::Boolean fixedAspectRatio; // 0x3D
		::System::Single aspectRatio; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_LOOKATBYROTATIONINFINALCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_LOOKATBYROTATIONINFINALCOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_LOOKATBYROTATIONINFINALCOMPONENT_UPDATE_OFFSET))(this);
		}
	};
}
