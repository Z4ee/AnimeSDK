#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x12B7C230)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x12B7C210)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x12B7C1F0)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x12B7C250)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x12B7C240)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x12B7C220)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x12B7CB10)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineExternalCamera_TypeDefinitionIndex = 36497;

	class CinemachineExternalCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Camera* m_Camera; // 0x70
		::Cinemachine::CameraState m_State; // 0x78
		::UnityEngine::Transform* _Follow_k__BackingField; // 0x158
		::Cinemachine::CinemachineVirtualCameraBase_BlendHint m_BlendHint; // 0x160

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
