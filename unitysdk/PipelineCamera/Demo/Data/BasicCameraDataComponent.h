#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define PIPELINECAMERA_DEMO_DATA_BASICCAMERADATACOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E88B500)
#define PIPELINECAMERA_DEMO_DATA_BASICCAMERADATACOMPONENT_PROCESSINPUT_OFFSET UNITYSDK_OFFSET(0x1E88B540)
#define PIPELINECAMERA_DEMO_DATA_BASICCAMERADATACOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E88B6B0)
#define PIPELINECAMERA_DEMO_DATA_BASICCAMERADATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88B6F0)

namespace PipelineCamera::Demo::Data
{
	inline static constexpr unsigned int BasicCameraDataComponent_TypeDefinitionIndex = 38416;

	class BasicCameraDataComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* _camera; // 0x18
		::System::Boolean _isCameraValid; // 0x20
		::UnityEngine::Transform* follow; // 0x28
		::System::Single radius; // 0x30
		::System::Single fieldOfView; // 0x34
		::UnityEngine::Vector3 cameraRotation; // 0x38
		::UnityEngine::Vector2 offset; // 0x44
		::System::Boolean isLocalSpace; // 0x4C
		::System::Single sensitivity; // 0x50
		::UnityEngine::Vector3 _lastMovePosition; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_DATA_BASICCAMERADATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_DATA_BASICCAMERADATACOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void ProcessInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_DATA_BASICCAMERADATACOMPONENT_PROCESSINPUT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_DATA_BASICCAMERADATACOMPONENT_UPDATE_OFFSET))(this);
		}
	};
}
