#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineBlendListCamera_Instruction.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ADVANCECURRENTINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x18C3E120)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x18C3D3B0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x18C3ED70)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x18C3CD90)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x18C3CF80)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x18C3ED90)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x18C3CF00)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x18C3CF60)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18C3CF30)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x18C3E100)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x18C3D980)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_INVALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x18C3EA60)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x18C3CF10)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18C3EA80)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18C3E920)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x18C3EBB0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x18C3CFA0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x18C3EB90)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x18C3D540)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x18C3CF90)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x18C3CEF0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x18C3CF70)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x18C3E110)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_UPDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x18C3D0F0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_VALIDATEINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x18C3EDA0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C3EF10)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlendListCamera_TypeDefinitionIndex = 38418;

	class CinemachineBlendListCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Transform* m_Follow; // 0x70
		::System::Boolean m_ShowDebugText; // 0x78
		::System::Boolean m_Loop; // 0x79
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* m_ChildCameras; // 0x80
		::Il2CppArray<::Cinemachine::CinemachineBlendListCamera_Instruction>* m_Instructions; // 0x88
		::Cinemachine::ICinemachineCamera* _LiveChild_k__BackingField; // 0x90
		::Cinemachine::ICinemachineCamera* _TransitioningFrom_k__BackingField; // 0x98
		::Cinemachine::CameraState m_State; // 0xA0
		::System::Single mActivationTime; // 0x180
		::System::Int32 mCurrentInstruction; // 0x184
		::Cinemachine::CinemachineBlend* mActiveBlend; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA__CTOR_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_LIVECHILD_OFFSET))(this, a1);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_LIVECHILD_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ISLIVECHILD_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_LOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_FOLLOW_OFFSET))(this, a1);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::Cinemachine::ICinemachineCamera* get_TransitioningFrom()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_TRANSITIONINGFROM_OFFSET))(this);
		}

		::System::Void set_TransitioningFrom(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_TRANSITIONINGFROM_OFFSET))(this, a1);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void OnGuiHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONGUIHANDLER_OFFSET))(this);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* get_ChildCameras()
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_CHILDCAMERAS_OFFSET))(this);
		}

		::System::Boolean get_IsBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_ISBLENDING_OFFSET))(this);
		}

		::System::Void InvalidateListOfChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_INVALIDATELISTOFCHILDREN_OFFSET))(this);
		}

		::System::Void UpdateListOfChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_UPDATELISTOFCHILDREN_OFFSET))(this);
		}

		::System::Void ValidateInstructions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_VALIDATEINSTRUCTIONS_OFFSET))(this);
		}

		::System::Void AdvanceCurrentInstruction(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ADVANCECURRENTINSTRUCTION_OFFSET))(this, a1);
		}
	};
}
