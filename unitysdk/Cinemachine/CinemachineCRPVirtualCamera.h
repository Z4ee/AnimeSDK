#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x16B2FDC0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x16B2F930)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x16B30120)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x16B2F510)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x16B2F870)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x16B30140)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x16B2F7B0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x16B2F790)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x16B30150)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x16B2FB70)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x16B2F6B0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x16B2FA00)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x16B30130)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x16B2F8D0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x16B2F810)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x16B30160)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x16B30170)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCRPVirtualCamera_TypeDefinitionIndex = 47782;

	class CinemachineCRPVirtualCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* _ActiveVirtualCamera_k__BackingField; // 0x68
		::Cinemachine::CameraState Field_6_1; // 0x70
		::Cinemachine::CinemachineBlend* Field_6_2; // 0x150
		::Cinemachine::ICinemachineCamera* _TransitioningFrom_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA__CTOR_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_ISLIVECHILD_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_LOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_FOLLOW_OFFSET))(this, a1);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void ActiveCamera(::Cinemachine::CinemachineVirtualCamera* a1, ::Cinemachine::CinemachineBlendDefinition a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineBlendDefinition))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_ACTIVECAMERA_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineVirtualCamera* get_ActiveVirtualCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_ACTIVEVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void set_ActiveVirtualCamera(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_ACTIVEVIRTUALCAMERA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_ISBLENDING_OFFSET))(this);
		}

		::Cinemachine::ICinemachineCamera* get_TransitioningFrom()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_TRANSITIONINGFROM_OFFSET))(this);
		}

		::System::Void set_TransitioningFrom(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_TRANSITIONINGFROM_OFFSET))(this, a1);
		}
	};
}
