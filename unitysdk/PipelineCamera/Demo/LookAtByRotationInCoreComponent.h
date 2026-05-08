#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/RotateVectorPolicy.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define PIPELINECAMERA_DEMO_LOOKATBYROTATIONINCORECOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B11F3F0)
#define PIPELINECAMERA_DEMO_LOOKATBYROTATIONINCORECOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B11F430)
#define PIPELINECAMERA_DEMO_LOOKATBYROTATIONINCORECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11F470)

namespace PipelineCamera::Demo
{
	inline static constexpr unsigned int LookAtByRotationInCoreComponent_TypeDefinitionIndex = 36143;

	class LookAtByRotationInCoreComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* _camera; // 0x18
		::System::Boolean _isCameraValid; // 0x20
		::UnityEngine::Transform* lookAt; // 0x28
		::UnityEngine::Vector2 lookAtScreenOffset; // 0x30
		::UnityEngine::Transform* main; // 0x38
		::System::Single mainRadius; // 0x40
		::System::Boolean ensureMainRadius; // 0x44
		::UnityEngine::Vector2 mainScreenOffset; // 0x48
		::System::Single fieldOfView; // 0x50
		::Foundation::RotateVectorPolicy rotateType; // 0x54
		::System::Boolean fixedAspectRatio; // 0x55
		::System::Single aspectRatio; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_LOOKATBYROTATIONINCORECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_LOOKATBYROTATIONINCORECOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_LOOKATBYROTATIONINCORECOMPONENT_UPDATE_OFFSET))(this);
		}
	};
}
