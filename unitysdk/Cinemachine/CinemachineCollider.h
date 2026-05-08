#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCollider_ResolutionStrategy.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineCollider_VcamExtraState; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SphereCollider; }

#define CINEMACHINE_CINEMACHINECOLLIDER_CAMERAWASDISPLACED_OFFSET UNITYSDK_OFFSET(0x1C328640)
#define CINEMACHINE_CINEMACHINECOLLIDER_CHECKFORTARGETOBSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1C32B160)
#define CINEMACHINE_CINEMACHINECOLLIDER_CLAMPRAYTOBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C32D240)
#define CINEMACHINE_CINEMACHINECOLLIDER_DESTROYCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1C328770)
#define CINEMACHINE_CINEMACHINECOLLIDER_GETCAMERADISPLACEMENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C3286A0)
#define CINEMACHINE_CINEMACHINECOLLIDER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1C328B50)
#define CINEMACHINE_CINEMACHINECOLLIDER_GETPUSHBACKDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C32CEE0)
#define CINEMACHINE_CINEMACHINECOLLIDER_GETWALKINGDIRECTION_OFFSET UNITYSDK_OFFSET(0x1C32C1D0)
#define CINEMACHINE_CINEMACHINECOLLIDER_GET_DEBUGPATHS_OFFSET UNITYSDK_OFFSET(0x1C3289C0)
#define CINEMACHINE_CINEMACHINECOLLIDER_ISTARGETOBSCURED_OFFSET UNITYSDK_OFFSET(0x1C3285F0)
#define CINEMACHINE_CINEMACHINECOLLIDER_ISTARGETOFFSCREEN_OFFSET UNITYSDK_OFFSET(0x1C32AA00)
#define CINEMACHINE_CINEMACHINECOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C328740)
#define CINEMACHINE_CINEMACHINECOLLIDER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C328700)
#define CINEMACHINE_CINEMACHINECOLLIDER_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C328B70)
#define CINEMACHINE_CINEMACHINECOLLIDER_PRESERVELINEOFSIGHT_OFFSET UNITYSDK_OFFSET(0x1C329590)
#define CINEMACHINE_CINEMACHINECOLLIDER_PULLCAMERAINFRONTOFNEARESTOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1C32B400)
#define CINEMACHINE_CINEMACHINECOLLIDER_PUSHCAMERABACK_OFFSET UNITYSDK_OFFSET(0x1C32B740)
#define CINEMACHINE_CINEMACHINECOLLIDER_RESPECTCAMERARADIUS_OFFSET UNITYSDK_OFFSET(0x1C329B70)
#define CINEMACHINE_CINEMACHINECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C32DB60)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCollider_TypeDefinitionIndex = 32466;

	class CinemachineCollider : public ::Cinemachine::CinemachineExtension
	{
	public:
		static ::UnityEngine::GameObject** StaticGet_mCameraColliderGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCollider_TypeDefinitionIndex)->GetStaticField(0x25CB0);
		}
		static ::UnityEngine::SphereCollider** StaticGet_mCameraCollider()
		{
			return (::UnityEngine::SphereCollider**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCollider_TypeDefinitionIndex)->GetStaticField(0x25CB8);
		}
		// static const ::System::Single PrecisionSlush; // 0x0
		// static const ::System::Single AngleThreshold; // 0x0
		::UnityEngine::LayerMask m_CollideAgainst; // 0x28
		::System::String* m_IgnoreTag; // 0x30
		::UnityEngine::LayerMask m_TransparentLayers; // 0x38
		::System::Single m_MinimumDistanceFromTarget; // 0x3C
		::System::Boolean m_AvoidObstacles; // 0x40
		::System::Single m_DistanceLimit; // 0x44
		::System::Single m_MinimumOcclusionTime; // 0x48
		::System::Single m_CameraRadius; // 0x4C
		::Cinemachine::CinemachineCollider_ResolutionStrategy m_Strategy; // 0x50
		::System::Int32 m_MaximumEffort; // 0x54
		::System::Single m_SmoothingTime; // 0x58
		::System::Single m_Damping; // 0x5C
		::System::Single m_DampingWhenOccluded; // 0x60
		::System::Single m_OptimalTargetDistance; // 0x64
		::Il2CppArray<::UnityEngine::RaycastHit>* m_CornerBuffer; // 0x68
		::Il2CppArray<::UnityEngine::Collider*>* mColliderBuffer; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsTargetObscured(::Cinemachine::ICinemachineCamera* vcam)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_ISTARGETOBSCURED_OFFSET))(this, vcam);
		}

		::System::Boolean CameraWasDisplaced(::Cinemachine::ICinemachineCamera* vcam)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_CAMERAWASDISPLACED_OFFSET))(this, vcam);
		}

		::System::Single GetCameraDisplacementDistance(::Cinemachine::ICinemachineCamera* vcam)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GETCAMERADISPLACEMENTDISTANCE_OFFSET))(this, vcam);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* get_DebugPaths()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GET_DEBUGPATHS_OFFSET))(this);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore_Stage stage, ::Cinemachine::CameraState& state, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_POSTPIPELINESTAGECALLBACK_OFFSET))(this, vcam, stage, state, deltaTime);
		}

		::UnityEngine::Vector3 PreserveLineOfSight(::Cinemachine::CameraState& state, ::Cinemachine::CinemachineCollider_VcamExtraState*& extra)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&, ::Cinemachine::CinemachineCollider_VcamExtraState*&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_PRESERVELINEOFSIGHT_OFFSET))(this, state, extra);
		}

		::UnityEngine::Vector3 PullCameraInFrontOfNearestObstacle(::UnityEngine::Vector3 cameraPos, ::UnityEngine::Vector3 lookAtPos, ::System::Int32 layerMask, ::UnityEngine::RaycastHit& hitInfo)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_PULLCAMERAINFRONTOFNEARESTOBSTACLE_OFFSET))(this, cameraPos, lookAtPos, layerMask, hitInfo);
		}

		::UnityEngine::Vector3 PushCameraBack(::UnityEngine::Vector3 currentPos, ::UnityEngine::Vector3 pushDir, ::UnityEngine::RaycastHit obstacle, ::UnityEngine::Vector3 lookAtPos, ::UnityEngine::Plane startPlane, ::System::Single targetDistance, ::System::Int32 iterations, ::Cinemachine::CinemachineCollider_VcamExtraState*& extra)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Plane, ::System::Single, ::System::Int32, ::Cinemachine::CinemachineCollider_VcamExtraState*&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_PUSHCAMERABACK_OFFSET))(this, currentPos, pushDir, obstacle, lookAtPos, startPlane, targetDistance, iterations, extra);
		}

		::System::Boolean GetWalkingDirection(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 pushDir, ::UnityEngine::RaycastHit obstacle, ::UnityEngine::Vector3& outDir)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GETWALKINGDIRECTION_OFFSET))(this, pos, pushDir, obstacle, outDir);
		}

		::System::Single GetPushBackDistance(::UnityEngine::Ray ray, ::UnityEngine::Plane startPlane, ::System::Single targetDistance, ::UnityEngine::Vector3 lookAtPos)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::Plane, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GETPUSHBACKDISTANCE_OFFSET))(this, ray, startPlane, targetDistance, lookAtPos);
		}

		::System::Single ClampRayToBounds(::UnityEngine::Ray ray, ::System::Single distance, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_CLAMPRAYTOBOUNDS_OFFSET))(this, ray, distance, bounds);
		}

		static ::System::Void DestroyCollider()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_DESTROYCOLLIDER_OFFSET))();
		}

		::UnityEngine::Vector3 RespectCameraRadius(::UnityEngine::Vector3 cameraPos, ::Cinemachine::CameraState& state)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_RESPECTCAMERARADIUS_OFFSET))(this, cameraPos, state);
		}

		::System::Boolean CheckForTargetObstructions(::Cinemachine::CameraState state)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_CHECKFORTARGETOBSTRUCTIONS_OFFSET))(this, state);
		}

		::System::Boolean IsTargetOffscreen(::Cinemachine::CameraState state)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_ISTARGETOFFSCREEN_OFFSET))(this, state);
		}
	};
}
