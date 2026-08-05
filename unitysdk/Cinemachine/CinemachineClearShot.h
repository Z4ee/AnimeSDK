#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class CinemachineBlenderSettings; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINECLEARSHOT_CHOOSECURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1F487AA0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1F487420)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x1F488BE0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1F486E50)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1F487020)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x1F488BD0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F486FA0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1F487000)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1F486FB0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x1F488FF0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1F4875D0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_INVALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F488830)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F486FE0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_LOOKUPBLEND_OFFSET UNITYSDK_OFFSET(0x1F488340)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F488860)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F4886C0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1F4889C0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1F487040)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1F488990)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1F488F20)
#define CINEMACHINE_CINEMACHINECLEARSHOT_RANDOMIZE_OFFSET UNITYSDK_OFFSET(0x1F488C20)
#define CINEMACHINE_CINEMACHINECLEARSHOT_RESETRANDOMIZATION_OFFSET UNITYSDK_OFFSET(0x1F488C00)
#define CINEMACHINE_CINEMACHINECLEARSHOT_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1F487030)
#define CINEMACHINE_CINEMACHINECLEARSHOT_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F486F90)
#define CINEMACHINE_CINEMACHINECLEARSHOT_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1F487010)
#define CINEMACHINE_CINEMACHINECLEARSHOT_SET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x1F489000)
#define CINEMACHINE_CINEMACHINECLEARSHOT_UPDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F4871B0)
#define CINEMACHINE_CINEMACHINECLEARSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F489010)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineClearShot_TypeDefinitionIndex = 34650;

	class CinemachineClearShot : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Transform* m_Follow; // 0x70
		::System::Boolean m_ShowDebugText; // 0x78
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* m_ChildCameras; // 0x80
		::System::Single m_ActivateAfter; // 0x88
		::System::Single m_MinDuration; // 0x8C
		::System::Boolean m_RandomizeChoice; // 0x90
		::Cinemachine::CinemachineBlendDefinition m_DefaultBlend; // 0x98
		::Cinemachine::CinemachineBlenderSettings* m_CustomBlends; // 0xA8
		::Cinemachine::ICinemachineCamera* _LiveChild_k__BackingField; // 0xB0
		::Cinemachine::CameraState m_State; // 0xB8
		::System::Single mActivationTime; // 0x1A0
		::System::Single mPendingActivationTime; // 0x1A4
		::Cinemachine::ICinemachineCamera* mPendingCamera; // 0x1A8
		::Cinemachine::CinemachineBlend* mActiveBlend; // 0x1B0
		::System::Boolean mRandomizeNow; // 0x1B8
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* m_RandomizedChilden; // 0x1C0
		::Cinemachine::ICinemachineCamera* _TransitioningFrom_k__BackingField; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT__CTOR_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_SET_LIVECHILD_OFFSET))(this, value);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_LIVECHILD_OFFSET))(this);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_STATE_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* vcam, ::System::Boolean dominantChildOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ISLIVECHILD_OFFSET))(this, vcam, dominantChildOnly);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_SET_LOOKAT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_SET_FOLLOW_OFFSET))(this, value);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_INTERNALUPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void OnGuiHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ONGUIHANDLER_OFFSET))(this);
		}

		::System::Boolean get_IsBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_ISBLENDING_OFFSET))(this);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* get_ChildCameras()
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_CHILDCAMERAS_OFFSET))(this);
		}

		::System::Void InvalidateListOfChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_INVALIDATELISTOFCHILDREN_OFFSET))(this);
		}

		::System::Void ResetRandomization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_RESETRANDOMIZATION_OFFSET))(this);
		}

		::System::Void UpdateListOfChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_UPDATELISTOFCHILDREN_OFFSET))(this);
		}

		::Cinemachine::ICinemachineCamera* ChooseCurrentCamera(::UnityEngine::Vector3 worldUp)
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_CHOOSECURRENTCAMERA_OFFSET))(this, worldUp);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* Randomize(::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* src)
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_RANDOMIZE_OFFSET))(this, src);
		}

		::Cinemachine::CinemachineBlendDefinition LookupBlend(::Cinemachine::ICinemachineCamera* fromKey, ::Cinemachine::ICinemachineCamera* toKey)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_LOOKUPBLEND_OFFSET))(this, fromKey, toKey);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime);
		}

		::Cinemachine::ICinemachineCamera* get_TransitioningFrom()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_TRANSITIONINGFROM_OFFSET))(this);
		}

		::System::Void set_TransitioningFrom(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_SET_TRANSITIONINGFROM_OFFSET))(this, value);
		}
	};
}
