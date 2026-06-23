#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_DRAWRETICLE_OFFSET UNITYSDK_OFFSET(0x1E54D720)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_GETLOOKATPOINT_OFFSET UNITYSDK_OFFSET(0x1E54DE10)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1E54D5D0)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E54D580)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E54E540)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_RESET_OFFSET UNITYSDK_OFFSET(0x1E54D5A0)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E54E620)

namespace Cinemachine
{
	inline static constexpr unsigned int Cinemachine3rdPersonAim_TypeDefinitionIndex = 34004;

	class Cinemachine3rdPersonAim : public ::Cinemachine::CinemachineExtension
	{
	public:
		::UnityEngine::LayerMask AimCollisionFilter; // 0x28
		::System::String* IgnoreTag; // 0x30
		::System::Single AimDistance; // 0x38
		::UnityEngine::RectTransform* AimTargetReticle; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_RESET_OFFSET))(this);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime);
		}

		::System::Void DrawReticle(::Cinemachine::CinemachineBrain* brain)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_DRAWRETICLE_OFFSET))(this, brain);
		}

		::UnityEngine::Vector3 GetLookAtPoint(::Cinemachine::CameraState& state)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_GETLOOKATPOINT_OFFSET))(this, state);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore_Stage stage, ::Cinemachine::CameraState& state, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_POSTPIPELINESTAGECALLBACK_OFFSET))(this, vcam, stage, state, deltaTime);
		}
	};
}
