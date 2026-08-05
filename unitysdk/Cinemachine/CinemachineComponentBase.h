#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_TransitionParams.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineTargetGroup; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class ICinemachineCamera; }
namespace Cinemachine { class ICinemachineTargetGroup; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINECOMPONENTBASE_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6C0FD0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1F6C0FE0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_ABSTRACTFOLLOWTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1F6BFC10)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_ABSTRACTLOOKATTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1F6C01C0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_BODYAPPLIESAFTERAIM_OFFSET UNITYSDK_OFFSET(0x1F6C0FA0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1F6BFDD0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6BE170)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGETROTATION_OFFSET UNITYSDK_OFFSET(0x1F6BE550)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1F6BD400)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1F6C0380)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6C0400)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGETROTATION_OFFSET UNITYSDK_OFFSET(0x1F6C07E0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x1F6BF760)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_VCAMSTATE_OFFSET UNITYSDK_OFFSET(0x1F6C0C10)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_VIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1F6BD5E0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1F6C0FC0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1F6C0FB0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_PREPIPELINEMUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1F6C0F90)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_UPDATEFOLLOWTARGETCACHE_OFFSET UNITYSDK_OFFSET(0x1F6BF8A0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_UPDATELOOKATTARGETCACHE_OFFSET UNITYSDK_OFFSET(0x1F6BFE50)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6BF580)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineComponentBase_TypeDefinitionIndex = 34737;

	class CinemachineComponentBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Epsilon; // 0x0
		::Cinemachine::CinemachineVirtualCameraBase* m_vcamOwner; // 0x18
		::UnityEngine::Transform* mCachedFollowTarget; // 0x20
		::Cinemachine::CinemachineVirtualCameraBase* mCachedFollowTargetVcam; // 0x28
		::Cinemachine::ICinemachineTargetGroup* mCachedFollowTargetGroup; // 0x30
		::UnityEngine::Transform* mCachedLookAtTarget; // 0x38
		::Cinemachine::CinemachineVirtualCameraBase* mCachedLookAtTargetVcam; // 0x40
		::Cinemachine::ICinemachineTargetGroup* mCachedLookAtTargetGroup; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE__CTOR_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCameraBase* get_VirtualCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_VIRTUALCAMERA_OFFSET))(this);
		}

		::UnityEngine::Transform* get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAtTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGET_OFFSET))(this);
		}

		::System::Void UpdateFollowTargetCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_UPDATEFOLLOWTARGETCACHE_OFFSET))(this);
		}

		::Cinemachine::ICinemachineTargetGroup* get_AbstractFollowTargetGroup()
		{
			return ((::Cinemachine::ICinemachineTargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_ABSTRACTFOLLOWTARGETGROUP_OFFSET))(this);
		}

		::Cinemachine::CinemachineTargetGroup* get_FollowTargetGroup()
		{
			return ((::Cinemachine::CinemachineTargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGETGROUP_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_FollowTargetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGETPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_FollowTargetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGETROTATION_OFFSET))(this);
		}

		::System::Void UpdateLookAtTargetCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_UPDATELOOKATTARGETCACHE_OFFSET))(this);
		}

		::Cinemachine::ICinemachineTargetGroup* get_AbstractLookAtTargetGroup()
		{
			return ((::Cinemachine::ICinemachineTargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_ABSTRACTLOOKATTARGETGROUP_OFFSET))(this);
		}

		::Cinemachine::CinemachineTargetGroup* get_LookAtTargetGroup()
		{
			return ((::Cinemachine::CinemachineTargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGETGROUP_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LookAtTargetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGETPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_LookAtTargetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGETROTATION_OFFSET))(this);
		}

		::Cinemachine::CameraState get_VcamState()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_VCAMSTATE_OFFSET))(this);
		}

		::System::Void PrePipelineMutateCameraState(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_PREPIPELINEMUTATECAMERASTATE_OFFSET))(this, curState, deltaTime);
		}

		::System::Boolean get_BodyAppliesAfterAim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_BODYAPPLIESAFTERAIM_OFFSET))(this);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams& transitionParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime, transitionParams);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GETMAXDAMPTIME_OFFSET))(this);
		}
	};
}
