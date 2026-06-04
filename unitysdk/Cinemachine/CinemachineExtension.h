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

#define CINEMACHINE_CINEMACHINEEXTENSION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1463BA30)
#define CINEMACHINE_CINEMACHINEEXTENSION_CONNECTTOVCAM_OFFSET UNITYSDK_OFFSET(0x146388B0)
#define CINEMACHINE_CINEMACHINEEXTENSION_ENSURESTARTED_OFFSET UNITYSDK_OFFSET(0x1463BA60)
#define CINEMACHINE_CINEMACHINEEXTENSION_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1463BAE0)
#define CINEMACHINE_CINEMACHINEEXTENSION_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1463BB00)
#define CINEMACHINE_CINEMACHINEEXTENSION_GET_VIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x14622630)
#define CINEMACHINE_CINEMACHINEEXTENSION_INVOKEPOSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1463BA90)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1462F780)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1463BA50)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1463BAC0)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1463BAF0)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONWORLDWARPED_OFFSET UNITYSDK_OFFSET(0x1463BAD0)
#define CINEMACHINE_CINEMACHINEEXTENSION_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1463BA80)
#define CINEMACHINE_CINEMACHINEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x14622F30)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineExtension_TypeDefinitionIndex = 36878;

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

		::System::Void ConnectToVcam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_CONNECTTOVCAM_OFFSET))(this, a1);
		}

		::System::Void PrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CameraState& a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InvokePostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_INVOKEPOSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void OnWorldWarped(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ONWORLDWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_GETMAXDAMPTIME_OFFSET))(this);
		}
	};
}
