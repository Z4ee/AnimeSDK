#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1BD42450)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1BD42430)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1BD42410)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1BD42470)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1BD42460)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1BD42440)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD42F50)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineExternalCamera_TypeDefinitionIndex = 32477;

	class CinemachineExternalCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Camera* m_Camera; // 0x70
		::Cinemachine::CameraState m_State; // 0x78
		::UnityEngine::Transform* _Follow_k__BackingField; // 0x160
		::Cinemachine::CinemachineVirtualCameraBase_BlendHint m_BlendHint; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA__CTOR_OFFSET))(this);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_SET_LOOKAT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_SET_FOLLOW_OFFSET))(this, value);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}
	};
}
