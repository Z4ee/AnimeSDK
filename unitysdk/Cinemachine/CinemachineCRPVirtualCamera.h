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

#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xA6E05B0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xA6E00F0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xA6E0990)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA6DFCB0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0xA6E0030)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0xA6E09B0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0xA6DFF70)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0xA6DFF50)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0xA6E09C0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0xA6E0360)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0xA6DFE80)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0xA6E0250)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xA6E09A0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0xA6E0090)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0xA6DFFD0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0xA6E09D0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E09E0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA___IFIXBASEPROXY_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xA6E0CE0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA___IFIXBASEPROXY_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA6E0CC0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA___IFIXBASEPROXY_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0xA6E0CD0)
#define CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA___IFIXBASEPROXY_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0xA6E0DA0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCRPVirtualCamera_TypeDefinitionIndex = 40325;

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

		::System::Void set_ActiveVirtualCamera(::Cinemachine::CinemachineVirtualCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_ACTIVEVIRTUALCAMERA_OFFSET))(this, value);
		}

		::System::Boolean get_IsBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_ISBLENDING_OFFSET))(this);
		}

		::Cinemachine::ICinemachineCamera* get_TransitioningFrom()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_GET_TRANSITIONINGFROM_OFFSET))(this);
		}

		::System::Void set_TransitioningFrom(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA_SET_TRANSITIONINGFROM_OFFSET))(this, value);
		}

		::System::String* __iFixBaseProxy_get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA___IFIXBASEPROXY_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsLiveChild(::Cinemachine::ICinemachineCamera* P0, ::System::Boolean P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA___IFIXBASEPROXY_ISLIVECHILD_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ForceCameraPosition(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA___IFIXBASEPROXY_FORCECAMERAPOSITION_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* P0, ::UnityEngine::Vector3 P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECRPVIRTUALCAMERA___IFIXBASEPROXY_ONTRANSITIONFROMCAMERA_OFFSET))(this, P0, P1, P2);
		}
	};
}
