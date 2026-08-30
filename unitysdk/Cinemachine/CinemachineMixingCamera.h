#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineMixingCamera_ValidChildrenMode.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ICinemachineCamera; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x18C667D0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GETWEIGHT_1_OFFSET UNITYSDK_OFFSET(0x18C65F50)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x18C65CC0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x18C67040)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x18C66660)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x18C66600)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x18C66640)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18C66610)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x18C672A0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_INVALIDATELISTOFCHILDRENMANUAL_OFFSET UNITYSDK_OFFSET(0x18C66B50)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_INVALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x18C669A0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x18C66ED0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18C66960)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x18C66680)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x18C669C0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x18C67060)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x18C66B70)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETCHILDRENMANUAL_OFFSET UNITYSDK_OFFSET(0x18C669E0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETWEIGHT_1_OFFSET UNITYSDK_OFFSET(0x18C66460)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x18C65E00)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x18C66670)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x18C665F0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x18C66650)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_VALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x18C660D0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C67600)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineMixingCamera_TypeDefinitionIndex = 38445;

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
		::Cinemachine::CinemachineMixingCamera_ValidChildrenMode m_ValidChildrenMode; // 0x88
		::Cinemachine::CameraState m_State; // 0x90
		::Cinemachine::ICinemachineCamera* _LiveChild_k__BackingField; // 0x170
		::UnityEngine::Transform* _LookAt_k__BackingField; // 0x178
		::UnityEngine::Transform* _Follow_k__BackingField; // 0x180
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* m_ChildCameras; // 0x188
		::System::Collections::Generic::Dictionary_2<::Cinemachine::CinemachineVirtualCameraBase*, ::System::Int32>* m_indexMap; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA__CTOR_OFFSET))(this);
		}

		::System::Single GetWeight(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GETWEIGHT_OFFSET))(this, a1);
		}

		::System::Void SetWeight(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETWEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Single GetWeight_1(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GETWEIGHT_1_OFFSET))(this, a1);
		}

		::System::Void SetWeight_1(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETWEIGHT_1_OFFSET))(this, a1, a2);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_LIVECHILD_OFFSET))(this, a1);
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

		::System::Void set_LookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_LOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_FOLLOW_OFFSET))(this, a1);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void SetChildrenManual(::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETCHILDRENMANUAL_OFFSET))(this, a1);
		}

		::System::Void InvalidateListOfChildrenManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_INVALIDATELISTOFCHILDRENMANUAL_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONVALIDATE_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ISLIVECHILD_OFFSET))(this, a1, a2);
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

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}
	};
}
