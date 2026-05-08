#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define PIPELINECAMERA_DEMO_DATA_SCREENCAMERADATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CEC90)

namespace PipelineCamera::Demo::Data
{
	inline static constexpr unsigned int ScreenCameraDataComponent_TypeDefinitionIndex = 36148;

	class ScreenCameraDataComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* _camera; // 0x18
		::System::Boolean _isCameraValid; // 0x20
		::UnityEngine::Transform* follow; // 0x28
		::System::Single radius; // 0x30
		::System::Single fieldOfView; // 0x34
		::UnityEngine::Vector3 cameraRotation; // 0x38
		::UnityEngine::Vector2 screenOffset; // 0x44
		::System::Boolean isLocalSpace; // 0x4C
		::System::Boolean fixedAspectRatio; // 0x4D
		::System::Single aspectRatio; // 0x50
		::System::Single sensitivity; // 0x54
		::UnityEngine::Vector3 _lastMovePosition; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_DATA_SCREENCAMERADATACOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
