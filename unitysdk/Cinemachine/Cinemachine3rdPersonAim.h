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

#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_DRAWRETICLE_OFFSET UNITYSDK_OFFSET(0x172601F0)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_GETLOOKATPOINT_OFFSET UNITYSDK_OFFSET(0x17260CE0)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x17260090)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x17260050)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x17261040)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_RESET_OFFSET UNITYSDK_OFFSET(0x17260060)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x17261120)

namespace Cinemachine
{
	inline static constexpr unsigned int Cinemachine3rdPersonAim_TypeDefinitionIndex = 37558;

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

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DrawReticle(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_DRAWRETICLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetLookAtPoint(::Cinemachine::CameraState& a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_GETLOOKATPOINT_OFFSET))(this, a1);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
