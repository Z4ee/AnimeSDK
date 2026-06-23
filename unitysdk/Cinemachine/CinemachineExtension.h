#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEEXTENSION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E092370)
#define CINEMACHINE_CINEMACHINEEXTENSION_CONNECTTOVCAM_OFFSET UNITYSDK_OFFSET(0x1E0923E0)
#define CINEMACHINE_CINEMACHINEEXTENSION_ENSURESTARTED_OFFSET UNITYSDK_OFFSET(0x1E0923C0)
#define CINEMACHINE_CINEMACHINEEXTENSION_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1E092CE0)
#define CINEMACHINE_CINEMACHINEEXTENSION_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1E092D00)
#define CINEMACHINE_CINEMACHINEEXTENSION_GET_VIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1E0921E0)
#define CINEMACHINE_CINEMACHINEEXTENSION_INVOKEPOSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E092CA0)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E0923A0)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E092390)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1E092CD0)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1E092CF0)
#define CINEMACHINE_CINEMACHINEEXTENSION_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E092C90)
#define CINEMACHINE_CINEMACHINEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E092D10)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineExtension_TypeDefinitionIndex = 34110;

	class CinemachineExtension : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Epsilon; // 0x0
		::Cinemachine::CinemachineVirtualCameraBase* m_vcamOwner; // 0x18
		::System::Collections::Generic::Dictionary_2<::Cinemachine::ICinemachineCamera*, ::System::Object*>* mExtraState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION__CTOR_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCameraBase* get_VirtualCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_GET_VIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ONDESTROY_OFFSET))(this);
		}

		::System::Void EnsureStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ENSURESTARTED_OFFSET))(this);
		}

		::System::Void ConnectToVcam(::System::Boolean connect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_CONNECTTOVCAM_OFFSET))(this, connect);
		}

		::System::Void PrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET))(this, vcam, curState, deltaTime);
		}

		::System::Void InvokePostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore_Stage stage, ::Cinemachine::CameraState& state, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_INVOKEPOSTPIPELINESTAGECALLBACK_OFFSET))(this, vcam, stage, state, deltaTime);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_GETMAXDAMPTIME_OFFSET))(this);
		}
	};
}
