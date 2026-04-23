#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x12B62C00)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETRIGPOSITIONS_OFFSET UNITYSDK_OFFSET(0x12B63E00)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x12B62B50)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x12B62BF0)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x12B62C20)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x12B62AC0)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_POSITIONCAMERA_OFFSET UNITYSDK_OFFSET(0x12B62E40)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_PULLTOWARDSSTARTONCOLLISION_OFFSET UNITYSDK_OFFSET(0x12B641C0)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_RESET_OFFSET UNITYSDK_OFFSET(0x12B62B20)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x12B64320)

namespace Cinemachine
{
	inline static constexpr unsigned int Cinemachine3rdPersonFollow_TypeDefinitionIndex = 36531;

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
		::UnityEngine::Vector3 PreviousFollowTargetPosition; // 0x84
		::System::Single PreviousHeadingAngle; // 0x90

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

		::UnityEngine::Vector3 PullTowardsStartOnCollision(::UnityEngine::Vector3& rayStart, ::UnityEngine::Vector3& rayEnd, ::UnityEngine::LayerMask& filter, ::System::Single radius)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::LayerMask&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_PULLTOWARDSSTARTONCOLLISION_OFFSET))(this, rayStart, rayEnd, filter, radius);
		}
	};
}
