#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Demo/Movement/DemoMovementAction.h"
#include "unitysdk/PipelineCamera/Demo/Movement/DemoMovementDirection.h"
#include "unitysdk/PipelineCamera/Demo/Movement/DemoMovementMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CharacterController; }

#define PIPELINECAMERA_DEMO_MOVEMENT_DEMOLOCOMOTIONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E7280)

namespace PipelineCamera::Demo::Movement
{
	inline static constexpr unsigned int DemoLocomotionController_TypeDefinitionIndex = 38421;

	class DemoLocomotionController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single moveSpeed; // 0x18
		::System::Single jumpHeight; // 0x1C
		::System::Single gravity; // 0x20
		::System::Single inputLateralAcceleration; // 0x24
		::System::Single lateralDeceleration; // 0x28
		::System::Single inAirAttenuation; // 0x2C
		::System::Single stepDown; // 0x30
		::System::Single rotateSpeed; // 0x34
		::UnityEngine::CharacterController* _characterController; // 0x38
		::UnityEngine::Camera* _camera; // 0x40
		::PipelineCamera::Demo::Movement::DemoMovementDirection _movementDirection; // 0x48
		::PipelineCamera::Demo::Movement::DemoMovementAction _movementAction; // 0x4C
		::PipelineCamera::Demo::Movement::DemoMovementMode _movementMode; // 0x50
		::UnityEngine::Vector3 _movementInput; // 0x54
		::UnityEngine::Vector3 _movementVelocity; // 0x60
		::System::Action_2<::PipelineCamera::Demo::Movement::DemoMovementDirection, ::PipelineCamera::Demo::Movement::DemoMovementDirection>* OnMovementDirectionChangedEvent; // 0x70
		::System::Action* OnControllerMoveEvent; // 0x78
		::System::Action* OnActionTriggered; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_MOVEMENT_DEMOLOCOMOTIONCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
