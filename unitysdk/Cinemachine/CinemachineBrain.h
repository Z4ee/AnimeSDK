#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineBrain_BrainUpdateMethod.h"
#include "unitysdk/Cinemachine/CinemachineBrain_UpdateMethod.h"
#include "unitysdk/Cinemachine/CinemachineCore_UpdateFilter.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class CinemachineBlenderSettings; }
namespace Cinemachine { class CinemachineBrain_BrainEvent; }
namespace Cinemachine { class CinemachineBrain_BrainFrame; }
namespace Cinemachine { class CinemachineBrain_VcamActivatedEvent; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class WaitForFixedUpdate; }

#define CINEMACHINE_CINEMACHINEBRAIN_AFTERPHYSICS_OFFSET UNITYSDK_OFFSET(0x1199ABC0)
#define CINEMACHINE_CINEMACHINEBRAIN_COMPUTECURRENTBLEND_OFFSET UNITYSDK_OFFSET(0x1199CA80)
#define CINEMACHINE_CINEMACHINEBRAIN_DEEPCAMBFROMBLEND_OFFSET UNITYSDK_OFFSET(0x1199DD10)
#define CINEMACHINE_CINEMACHINEBRAIN_FORCEUPDATEBYPERFORMANCETIMELINE_OFFSET UNITYSDK_OFFSET(0x1199C4B0)
#define CINEMACHINE_CINEMACHINEBRAIN_GETBRAINFRAME_OFFSET UNITYSDK_OFFSET(0x1199DE20)
#define CINEMACHINE_CINEMACHINEBRAIN_GETEFFECTIVEDELTATIME_OFFSET UNITYSDK_OFFSET(0x1199C4C0)
#define CINEMACHINE_CINEMACHINEBRAIN_GETSOLOGUICOLOR_OFFSET UNITYSDK_OFFSET(0x1199A4C0)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_ACTIVEBLEND_OFFSET UNITYSDK_OFFSET(0x1199C200)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1199C310)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_CURRENTCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1199E8A0)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_DEFAULTWORLDUP_OFFSET UNITYSDK_OFFSET(0x1199A4D0)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x1199C1E0)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_OUTPUTCAMERA_OFFSET UNITYSDK_OFFSET(0x11994400)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_SOLOCAMERA_OFFSET UNITYSDK_OFFSET(0x1199A0D0)
#define CINEMACHINE_CINEMACHINEBRAIN_ISLIVE_OFFSET UNITYSDK_OFFSET(0x11994010)
#define CINEMACHINE_CINEMACHINEBRAIN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1199C4A0)
#define CINEMACHINE_CINEMACHINEBRAIN_LOOKUPBLEND_OFFSET UNITYSDK_OFFSET(0x1199E650)
#define CINEMACHINE_CINEMACHINEBRAIN_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1199AF20)
#define CINEMACHINE_CINEMACHINEBRAIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1199AC10)
#define CINEMACHINE_CINEMACHINEBRAIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1199A680)
#define CINEMACHINE_CINEMACHINEBRAIN_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1199BC30)
#define CINEMACHINE_CINEMACHINEBRAIN_ONSCENELOADED_OFFSET UNITYSDK_OFFSET(0x1199AF10)
#define CINEMACHINE_CINEMACHINEBRAIN_ONSCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1199B3F0)
#define CINEMACHINE_CINEMACHINEBRAIN_PROCESSACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x1199CEE0)
#define CINEMACHINE_CINEMACHINEBRAIN_PUSHSTATETOUNITYCAMERA_OFFSET UNITYSDK_OFFSET(0x1199E230)
#define CINEMACHINE_CINEMACHINEBRAIN_RELEASECAMERAOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1199E180)
#define CINEMACHINE_CINEMACHINEBRAIN_SETALLWORKINGBLENDFINISH_OFFSET UNITYSDK_OFFSET(0x1199D7A0)
#define CINEMACHINE_CINEMACHINEBRAIN_SETCAMERAOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1199DF20)
#define CINEMACHINE_CINEMACHINEBRAIN_SET_CURRENTCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1199E8D0)
#define CINEMACHINE_CINEMACHINEBRAIN_SET_SOLOCAMERA_OFFSET UNITYSDK_OFFSET(0x1199A1A0)
#define CINEMACHINE_CINEMACHINEBRAIN_START_OFFSET UNITYSDK_OFFSET(0x1199B400)
#define CINEMACHINE_CINEMACHINEBRAIN_TOPCAMERAFROMPRIORITYQUEUE_OFFSET UNITYSDK_OFFSET(0x1199E440)
#define CINEMACHINE_CINEMACHINEBRAIN_UPDATEFRAME0_OFFSET UNITYSDK_OFFSET(0x1199C6A0)
#define CINEMACHINE_CINEMACHINEBRAIN_UPDATEVIRTUALCAMERAS_OFFSET UNITYSDK_OFFSET(0x1199B420)
#define CINEMACHINE_CINEMACHINEBRAIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1199F360)
#define CINEMACHINE_CINEMACHINEBRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1199F260)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_TypeDefinitionIndex = 30759;

	class CinemachineBrain : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::AnimationCurve** StaticGet_mDefaultLinearAnimationCurve()
		{
			return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(CinemachineBrain_TypeDefinitionIndex)->GetStaticField(0x31290);
		}
		static ::Cinemachine::ICinemachineCamera** StaticGet_mSoloCamera()
		{
			return (::Cinemachine::ICinemachineCamera**)Il2CppClass::FromTypeDefinitionIndex(CinemachineBrain_TypeDefinitionIndex)->GetStaticField(0x31298);
		}
		static ::System::Boolean* StaticGet_useStaticFraPlane()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CinemachineBrain_TypeDefinitionIndex)->GetStaticField(0x10130);
		}
		static ::System::Single* StaticGet_DeltaTimeBiasForThisFrame()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CinemachineBrain_TypeDefinitionIndex)->GetStaticField(0x10134);
		}
		::System::Single m_ExtraTimeScale; // 0x18
		::System::Boolean m_ShowDebugText; // 0x1C
		::System::Boolean m_ShowCameraFrustum; // 0x1D
		::System::Boolean m_IgnoreTimeScale; // 0x1E
		::UnityEngine::Transform* m_WorldUpOverride; // 0x20
		::Cinemachine::CinemachineBrain_UpdateMethod m_UpdateMethod; // 0x28
		::Cinemachine::CinemachineBrain_BrainUpdateMethod m_BlendUpdateMethod; // 0x2C
		::Cinemachine::CinemachineBlendDefinition m_DefaultBlend; // 0x30
		::Cinemachine::CinemachineBlenderSettings* m_CustomBlends; // 0x40
		::UnityEngine::Camera* m_OutputCamera; // 0x48
		::Cinemachine::CinemachineBrain_BrainEvent* m_CameraCutEvent; // 0x50
		::Cinemachine::CinemachineBrain_VcamActivatedEvent* m_CameraActivatedEvent; // 0x58
		::UnityEngine::Coroutine* mPhysicsCoroutine; // 0x60
		::System::Boolean _IsForceUpdateByPerformanceTimeline; // 0x68
		::UnityEngine::WaitForFixedUpdate* mWaitForFixedUpdate; // 0x70
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineBrain_BrainFrame*>* mFrameStack; // 0x78
		::System::Int32 mNextFrameId; // 0x80
		::Cinemachine::CinemachineBlend* mCurrentLiveCameras; // 0x88
		::Cinemachine::ICinemachineCamera* mActiveCameraPreviousFrame; // 0x90
		::Cinemachine::CameraState _CurrentCameraState_k__BackingField; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__CCTOR_OFFSET))();
		}

		::UnityEngine::Camera* get_OutputCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_OUTPUTCAMERA_OFFSET))(this);
		}

		static ::Cinemachine::ICinemachineCamera* get_SoloCamera()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_SOLOCAMERA_OFFSET))();
		}

		static ::System::Void set_SoloCamera(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_SET_SOLOCAMERA_OFFSET))(value);
		}

		static ::UnityEngine::Color GetSoloGUIColor()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GETSOLOGUICOLOR_OFFSET))();
		}

		::UnityEngine::Vector3 get_DefaultWorldUp()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_DEFAULTWORLDUP_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ONSCENELOADED_OFFSET))(this, scene, mode);
		}

		::System::Void OnSceneUnloaded(::UnityEngine::SceneManagement::Scene scene)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ONSCENEUNLOADED_OFFSET))(this, scene);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_START_OFFSET))(this);
		}

		::System::Void OnGuiHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ONGUIHANDLER_OFFSET))(this);
		}

		::System::Collections::IEnumerator* AfterPhysics()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_AFTERPHYSICS_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ForceUpdateByPerformanceTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_FORCEUPDATEBYPERFORMANCETIMELINE_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void SetAllWorkingBlendFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_SETALLWORKINGBLENDFINISH_OFFSET))(this);
		}

		::System::Single GetEffectiveDeltaTime(::System::Boolean fixedDelta)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GETEFFECTIVEDELTATIME_OFFSET))(this, fixedDelta);
		}

		::System::Void UpdateVirtualCameras(::Cinemachine::CinemachineCore_UpdateFilter updateFilter, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineCore_UpdateFilter, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_UPDATEVIRTUALCAMERAS_OFFSET))(this, updateFilter, deltaTime);
		}

		::Cinemachine::ICinemachineCamera* get_ActiveVirtualCamera()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_ACTIVEVIRTUALCAMERA_OFFSET))(this);
		}

		static ::Cinemachine::ICinemachineCamera* DeepCamBFromBlend(::Cinemachine::CinemachineBlend* blend)
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::Cinemachine::CinemachineBlend*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_DEEPCAMBFROMBLEND_OFFSET))(blend);
		}

		::System::Boolean get_IsBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_ISBLENDING_OFFSET))(this);
		}

		::Cinemachine::CinemachineBlend* get_ActiveBlend()
		{
			return ((::Cinemachine::CinemachineBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_ACTIVEBLEND_OFFSET))(this);
		}

		::System::Int32 GetBrainFrame(::System::Int32 withId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GETBRAINFRAME_OFFSET))(this, withId);
		}

		::System::Int32 SetCameraOverride(::System::Int32 overrideId, ::Cinemachine::ICinemachineCamera* camA, ::Cinemachine::ICinemachineCamera* camB, ::System::Single weightB, ::System::Single deltaTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_SETCAMERAOVERRIDE_OFFSET))(this, overrideId, camA, camB, weightB, deltaTime);
		}

		::System::Void ReleaseCameraOverride(::System::Int32 overrideId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_RELEASECAMERAOVERRIDE_OFFSET))(this, overrideId);
		}

		::System::Void ProcessActiveCamera(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_PROCESSACTIVECAMERA_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateFrame0(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_UPDATEFRAME0_OFFSET))(this, deltaTime);
		}

		::System::Void ComputeCurrentBlend(::Cinemachine::CinemachineBlend*& outputBlend, ::System::Int32 numTopLayersToExclude)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlend*&, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_COMPUTECURRENTBLEND_OFFSET))(this, outputBlend, numTopLayersToExclude);
		}

		::System::Boolean IsLive(::Cinemachine::ICinemachineCamera* vcam, ::System::Boolean dominantChildOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ISLIVE_OFFSET))(this, vcam, dominantChildOnly);
		}

		::Cinemachine::CameraState get_CurrentCameraState()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_CURRENTCAMERASTATE_OFFSET))(this);
		}

		::System::Void set_CurrentCameraState(::Cinemachine::CameraState value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_SET_CURRENTCAMERASTATE_OFFSET))(this, value);
		}

		::Cinemachine::ICinemachineCamera* TopCameraFromPriorityQueue()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_TOPCAMERAFROMPRIORITYQUEUE_OFFSET))(this);
		}

		::Cinemachine::CinemachineBlendDefinition LookupBlend(::Cinemachine::ICinemachineCamera* fromKey, ::Cinemachine::ICinemachineCamera* toKey)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_LOOKUPBLEND_OFFSET))(this, fromKey, toKey);
		}

		::System::Void PushStateToUnityCamera(::Cinemachine::CameraState state)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_PUSHSTATETOUNITYCAMERA_OFFSET))(this, state);
		}
	};
}
