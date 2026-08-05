#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/Cinemachine/NapVirtualStateDrivenCamera_Instruction.h"
#include "unitysdk/Cinemachine/NapVirtualStateDrivenCamera_ParentCameraMove.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class CinemachineBlenderSettings; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_CHOOSECURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1F48FBD0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_CREATEBLEND1_OFFSET UNITYSDK_OFFSET(0x1F4904C0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1F48F2B0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x1F490B10)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1F48ECD0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1F48EEA0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x1F490B30)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F48EE20)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1F48EE80)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1F48EE50)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x1F48FBB0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_HIDELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F491220)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1F48F500)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_INVALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F490790)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F48EE30)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_LOOKUPBLEND_OFFSET UNITYSDK_OFFSET(0x1F490140)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F4907B0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F490630)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1F490900)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1F48EEC0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1F4908E0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1F48F460)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x1F490B40)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1F48EEB0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F48EE10)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1F48EE90)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x1F48FBC0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_UPDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F48F030)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_VALIDATEINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1F490D30)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4913B0)

namespace Cinemachine
{
	inline static constexpr unsigned int NapVirtualStateDrivenCamera_TypeDefinitionIndex = 34693;

	class NapVirtualStateDrivenCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Transform* m_Follow; // 0x70
		::System::Boolean m_ShowDebugText; // 0x78
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* m_ChildCameras; // 0x80
		::Il2CppArray<::Cinemachine::NapVirtualStateDrivenCamera_Instruction>* m_Instructions; // 0x88
		::Il2CppArray<::System::String*>* CameraMoveMode; // 0x90
		::Cinemachine::CinemachineBlendDefinition m_DefaultBlend; // 0x98
		::Cinemachine::CinemachineBlenderSettings* m_CustomBlends; // 0xA8
		::Il2CppArray<::Cinemachine::NapVirtualStateDrivenCamera_ParentCameraMove>* m_ParentCameraMove; // 0xB0
		::Cinemachine::ICinemachineCamera* _LiveChild_k__BackingField; // 0xB8
		::Cinemachine::ICinemachineCamera* _TransitioningFrom_k__BackingField; // 0xC0
		::Cinemachine::CameraState m_State; // 0xC8
		::System::Single mActivationTime; // 0x1B0
		::Cinemachine::NapVirtualStateDrivenCamera_Instruction mActiveInstruction; // 0x1B8
		::System::Single mPendingActivationTime; // 0x1D0
		::Cinemachine::NapVirtualStateDrivenCamera_Instruction mPendingInstruction; // 0x1D8
		::Cinemachine::CinemachineBlend* mActiveBlend; // 0x1F0
		::System::Boolean isStartExitControlState; // 0x1F8
		::System::Single ExitControlStateTimer; // 0x1FC
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* mInstructionDictionary; // 0x200
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* mStateParentLookup; // 0x208
		::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* m_clipInfoList; // 0x210

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA__CTOR_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_LIVECHILD_OFFSET))(this, value);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_LIVECHILD_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* vcam, ::System::Boolean dominantChildOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ISLIVECHILD_OFFSET))(this, vcam, dominantChildOnly);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_LOOKAT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_FOLLOW_OFFSET))(this, value);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime);
		}

		::Cinemachine::ICinemachineCamera* get_TransitioningFrom()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_TRANSITIONINGFROM_OFFSET))(this);
		}

		::System::Void set_TransitioningFrom(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_TRANSITIONINGFROM_OFFSET))(this, value);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::Cinemachine::CinemachineBlend* CreateBlend1(::Cinemachine::ICinemachineCamera* camA, ::Cinemachine::ICinemachineCamera* camB, ::Cinemachine::CinemachineBlendDefinition blendDef, ::Cinemachine::CinemachineBlend* activeBlend, ::System::Single stableTime)
		{
			return ((::Cinemachine::CinemachineBlend*(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::CinemachineBlendDefinition, ::Cinemachine::CinemachineBlend*, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_CREATEBLEND1_OFFSET))(this, camA, camB, blendDef, activeBlend, stableTime);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void OnGuiHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONGUIHANDLER_OFFSET))(this);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* get_ChildCameras()
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_CHILDCAMERAS_OFFSET))(this);
		}

		::System::Boolean get_IsBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_ISBLENDING_OFFSET))(this);
		}

		::System::Void InvalidateListOfChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_INVALIDATELISTOFCHILDREN_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateListOfChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_UPDATELISTOFCHILDREN_OFFSET))(this);
		}

		::System::Void HideListOfChildren(::Cinemachine::CinemachineVirtualCameraBase* best)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_HIDELISTOFCHILDREN_OFFSET))(this, best);
		}

		::System::Void ValidateInstructions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_VALIDATEINSTRUCTIONS_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCameraBase* ChooseCurrentCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_CHOOSECURRENTCAMERA_OFFSET))(this);
		}

		::Cinemachine::CinemachineBlendDefinition LookupBlend(::Cinemachine::ICinemachineCamera* fromKey, ::Cinemachine::ICinemachineCamera* toKey)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_LOOKUPBLEND_OFFSET))(this, fromKey, toKey);
		}
	};
}
