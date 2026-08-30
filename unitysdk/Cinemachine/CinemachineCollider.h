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

#define CINEMACHINE_CINEMACHINECOLLIDER_CAMERAWASDISPLACED_OFFSET UNITYSDK_OFFSET(0x18C46C40)
#define CINEMACHINE_CINEMACHINECOLLIDER_CHECKFORTARGETOBSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x18C499A0)
#define CINEMACHINE_CINEMACHINECOLLIDER_CLAMPRAYTOBOUNDS_OFFSET UNITYSDK_OFFSET(0x18C4B530)
#define CINEMACHINE_CINEMACHINECOLLIDER_DESTROYCOLLIDER_OFFSET UNITYSDK_OFFSET(0x18C46DD0)
#define CINEMACHINE_CINEMACHINECOLLIDER_GETCAMERADISPLACEMENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x18C46CA0)
#define CINEMACHINE_CINEMACHINECOLLIDER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x18C47140)
#define CINEMACHINE_CINEMACHINECOLLIDER_GETPUSHBACKDISTANCE_OFFSET UNITYSDK_OFFSET(0x18C4B1D0)
#define CINEMACHINE_CINEMACHINECOLLIDER_GETWALKINGDIRECTION_OFFSET UNITYSDK_OFFSET(0x18C4A820)
#define CINEMACHINE_CINEMACHINECOLLIDER_GET_DEBUGPATHS_OFFSET UNITYSDK_OFFSET(0x18C46F80)
#define CINEMACHINE_CINEMACHINECOLLIDER_ISTARGETOBSCURED_OFFSET UNITYSDK_OFFSET(0x18C46BF0)
#define CINEMACHINE_CINEMACHINECOLLIDER_ISTARGETOFFSCREEN_OFFSET UNITYSDK_OFFSET(0x18C49280)
#define CINEMACHINE_CINEMACHINECOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18C46D40)
#define CINEMACHINE_CINEMACHINECOLLIDER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x18C46D00)
#define CINEMACHINE_CINEMACHINECOLLIDER_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x18C47160)
#define CINEMACHINE_CINEMACHINECOLLIDER_PRESERVELIGNOFSIGHT_OFFSET UNITYSDK_OFFSET(0x18C47F30)
#define CINEMACHINE_CINEMACHINECOLLIDER_PULLCAMERAINFRONTOFNEARESTOBSTACLE_OFFSET UNITYSDK_OFFSET(0x18C49BE0)
#define CINEMACHINE_CINEMACHINECOLLIDER_PUSHCAMERABACK_OFFSET UNITYSDK_OFFSET(0x18C49ED0)
#define CINEMACHINE_CINEMACHINECOLLIDER_RESPECTCAMERARADIUS_OFFSET UNITYSDK_OFFSET(0x18C48590)
#define CINEMACHINE_CINEMACHINECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4BE50)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCollider_TypeDefinitionIndex = 38430;

	class CinemachineCollider : public ::Cinemachine::CinemachineExtension
	{
	public:
		static ::UnityEngine::GameObject** StaticGet_mCameraColliderGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCollider_TypeDefinitionIndex)->GetStaticField(0x54FD0);
		}
		static ::UnityEngine::SphereCollider** StaticGet_mCameraCollider()
		{
			return (::UnityEngine::SphereCollider**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCollider_TypeDefinitionIndex)->GetStaticField(0x54FD8);
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

		::System::Boolean IsTargetObscured(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_ISTARGETOBSCURED_OFFSET))(this, a1);
		}

		::System::Boolean CameraWasDisplaced(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_CAMERAWASDISPLACED_OFFSET))(this, a1);
		}

		::System::Single GetCameraDisplacementDistance(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GETCAMERADISPLACEMENTDISTANCE_OFFSET))(this, a1);
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

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 PreserveLignOfSight(::Cinemachine::CameraState& a1, ::Cinemachine::CinemachineCollider_VcamExtraState*& a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&, ::Cinemachine::CinemachineCollider_VcamExtraState*&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_PRESERVELIGNOFSIGHT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 PullCameraInFrontOfNearestObstacle(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::UnityEngine::RaycastHit& a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_PULLCAMERAINFRONTOFNEARESTOBSTACLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 PushCameraBack(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Plane a5, ::System::Single a6, ::System::Int32 a7, ::Cinemachine::CinemachineCollider_VcamExtraState*& a8)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Plane, ::System::Single, ::System::Int32, ::Cinemachine::CinemachineCollider_VcamExtraState*&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_PUSHCAMERABACK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean GetWalkingDirection(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GETWALKINGDIRECTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single GetPushBackDistance(::UnityEngine::Ray a1, ::UnityEngine::Plane a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::Plane, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GETPUSHBACKDISTANCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single ClampRayToBounds(::UnityEngine::Ray a1, ::System::Single a2, ::UnityEngine::Bounds a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_CLAMPRAYTOBOUNDS_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void DestroyCollider()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_DESTROYCOLLIDER_OFFSET))();
		}

		::UnityEngine::Vector3 RespectCameraRadius(::UnityEngine::Vector3 a1, ::Cinemachine::CameraState& a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_RESPECTCAMERARADIUS_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckForTargetObstructions(::Cinemachine::CameraState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_CHECKFORTARGETOBSTRUCTIONS_OFFSET))(this, a1);
		}

		::System::Boolean IsTargetOffscreen(::Cinemachine::CameraState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_ISTARGETOFFSCREEN_OFFSET))(this, a1);
		}
	};
}
