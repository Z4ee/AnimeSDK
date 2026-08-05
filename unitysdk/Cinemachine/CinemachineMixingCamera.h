#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ICinemachineCamera; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6C5D70)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GETWEIGHT_1_OFFSET UNITYSDK_OFFSET(0x1F6C5370)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1F6C51B0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x1F6C6490)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1F6C5BE0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F6C5B80)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1F6C5BC0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1F6C5B90)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1F6C6940)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_INVALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F6C5F50)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F6C6310)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F6C5F20)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1F6C5C00)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1F6C5F70)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1F6C64B0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F6C5F90)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETWEIGHT_1_OFFSET UNITYSDK_OFFSET(0x1F6C58F0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1F6C5290)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1F6C5BF0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F6C5B70)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1F6C5BD0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_VALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F6C55D0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6C6C10)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineMixingCamera_TypeDefinitionIndex = 34671;

	class CinemachineMixingCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		// static const ::System::Int32 MaxCameras = 0x8; // 0x0
		::System::Single m_Weight0; // 0x68
		::System::Single m_Weight1; // 0x6C
		::System::Single m_Weight2; // 0x70
		::System::Single m_Weight3; // 0x74
		::System::Single m_Weight4; // 0x78
		::System::Single m_Weight5; // 0x7C
		::System::Single m_Weight6; // 0x80
		::System::Single m_Weight7; // 0x84
		::Cinemachine::CameraState m_State; // 0x88
		::Cinemachine::ICinemachineCamera* _LiveChild_k__BackingField; // 0x170
		::UnityEngine::Transform* _LookAt_k__BackingField; // 0x178
		::UnityEngine::Transform* _Follow_k__BackingField; // 0x180
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* m_ChildCameras; // 0x188
		::System::Collections::Generic::Dictionary_2<::Cinemachine::CinemachineVirtualCameraBase*, ::System::Int32>* m_indexMap; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA__CTOR_OFFSET))(this);
		}

		::System::Single GetWeight(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GETWEIGHT_OFFSET))(this, index);
		}

		::System::Void SetWeight(::System::Int32 index, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETWEIGHT_OFFSET))(this, index, w);
		}

		::System::Single GetWeight_1(::Cinemachine::CinemachineVirtualCameraBase* vcam)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GETWEIGHT_1_OFFSET))(this, vcam);
		}

		::System::Void SetWeight_1(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETWEIGHT_1_OFFSET))(this, vcam, w);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_LIVECHILD_OFFSET))(this, value);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_LIVECHILD_OFFSET))(this);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_LOOKAT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_FOLLOW_OFFSET))(this, value);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONVALIDATE_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* vcam, ::System::Boolean dominantChildOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ISLIVECHILD_OFFSET))(this, vcam, dominantChildOnly);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* get_ChildCameras()
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_CHILDCAMERAS_OFFSET))(this);
		}

		::System::Void InvalidateListOfChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_INVALIDATELISTOFCHILDREN_OFFSET))(this);
		}

		::System::Void ValidateListOfChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_VALIDATELISTOFCHILDREN_OFFSET))(this);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}
	};
}
