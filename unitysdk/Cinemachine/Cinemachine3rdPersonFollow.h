#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETHEADING_OFFSET UNITYSDK_OFFSET(0x1BF5F920)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1BF5E340)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETRAWRIGPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1BF5FA00)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETRIGPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1BF60000)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BF5DF70)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1BF5E330)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1BF5E360)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BF5DF10)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BF5DE80)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_POSITIONCAMERA_OFFSET UNITYSDK_OFFSET(0x1BF5E810)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_RESET_OFFSET UNITYSDK_OFFSET(0x1BF5DEE0)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_RESOLVECOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1BF5FD50)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF60360)

namespace Cinemachine
{
	inline static constexpr unsigned int Cinemachine3rdPersonFollow_TypeDefinitionIndex = 32509;

	class Cinemachine3rdPersonFollow : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::UnityEngine::Vector3 Damping; // 0x50
		::UnityEngine::Vector3 ShoulderOffset; // 0x5C
		::System::Single VerticalArmLength; // 0x68
		::System::Single CameraSide; // 0x6C
		::System::Single CameraDistance; // 0x70
		::UnityEngine::LayerMask CameraCollisionFilter; // 0x74
		::System::String* IgnoreTag; // 0x78
		::System::Single CameraRadius; // 0x80
		::UnityEngine::Vector3 m_PreviousFollowTargetPosition; // 0x84
		::UnityEngine::Vector3 m_DampingCorrection; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_RESET_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::CinemachineCore_Stage get_Stage()
		{
			return ((::Cinemachine::CinemachineCore_Stage(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GET_STAGE_OFFSET))(this);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_MUTATECAMERASTATE_OFFSET))(this, curState, deltaTime);
		}

		::System::Void PositionCamera(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_POSITIONCAMERA_OFFSET))(this, curState, deltaTime);
		}

		::System::Void GetRigPositions(::UnityEngine::Vector3& root, ::UnityEngine::Vector3& shoulder, ::UnityEngine::Vector3& hand)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETRIGPOSITIONS_OFFSET))(this, root, shoulder, hand);
		}

		::UnityEngine::Quaternion GetHeading(::UnityEngine::Vector3 targetForward, ::UnityEngine::Vector3 up)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETHEADING_OFFSET))(this, targetForward, up);
		}

		::System::Void GetRawRigPositions(::UnityEngine::Vector3 root, ::UnityEngine::Quaternion targetRot, ::UnityEngine::Quaternion heading, ::UnityEngine::Vector3& shoulder, ::UnityEngine::Vector3& hand)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETRAWRIGPOSITIONS_OFFSET))(this, root, targetRot, heading, shoulder, hand);
		}

		::UnityEngine::Vector3 ResolveCollisions(::UnityEngine::Vector3 root, ::UnityEngine::Vector3 tip, ::System::Single cameraRadius)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_RESOLVECOLLISIONS_OFFSET))(this, root, tip, cameraRadius);
		}
	};
}
