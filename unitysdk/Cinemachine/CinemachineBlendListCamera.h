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

#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ADVANCECURRENTINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1F845B40)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1F8450C0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x1F846290)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1F844AE0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1F844CD0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x1F8462B0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F844C50)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1F844CB0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1F844C80)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x1F845B20)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1F845410)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_INVALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F845F10)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F844C60)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F845F30)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F845DB0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1F846080)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1F844CF0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1F846060)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1F845270)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_RESET_OFFSET UNITYSDK_OFFSET(0x1F844C20)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1F844CE0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F844C40)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1F844CC0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x1F845B30)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_UPDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F844E60)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_VALIDATEINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1F8462C0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F846560)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlendListCamera_TypeDefinitionIndex = 34641;

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
		::System::Single mActivationTime; // 0x188
		::System::Int32 mCurrentInstruction; // 0x18C
		::Cinemachine::CinemachineBlend* mActiveBlend; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA__CTOR_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_RESET_OFFSET))(this);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_LIVECHILD_OFFSET))(this, value);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_LIVECHILD_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* vcam, ::System::Boolean dominantChildOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ISLIVECHILD_OFFSET))(this, vcam, dominantChildOnly);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_LOOKAT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_FOLLOW_OFFSET))(this, value);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime);
		}

		::Cinemachine::ICinemachineCamera* get_TransitioningFrom()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_TRANSITIONINGFROM_OFFSET))(this);
		}

		::System::Void set_TransitioningFrom(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_TRANSITIONINGFROM_OFFSET))(this, value);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
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

		::System::Void AdvanceCurrentInstruction(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ADVANCECURRENTINSTRUCTION_OFFSET))(this, deltaTime);
		}
	};
}
