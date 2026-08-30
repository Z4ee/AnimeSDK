#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineStateDrivenCamera_HashPair.h"
#include "unitysdk/Cinemachine/CinemachineStateDrivenCamera_Instruction.h"
#include "unitysdk/Cinemachine/CinemachineStateDrivenCamera_ParentHash.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class CinemachineBlenderSettings; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_CHOOSECURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x16477B10)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_CREATEFAKEHASH_OFFSET UNITYSDK_OFFSET(0x16478800)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x164770A0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GETCLIPHASH_OFFSET UNITYSDK_OFFSET(0x16478F40)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x164787D0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x16476A70)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x16476C60)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x164787F0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x16476BE0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x16476C40)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x16476C10)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x16477AF0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x164773D0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_INVALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x164784C0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x16476BF0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_LOOKUPBLEND_OFFSET UNITYSDK_OFFSET(0x16478030)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_LOOKUPFAKEHASH_OFFSET UNITYSDK_OFFSET(0x16478870)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x164784E0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16478380)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x16478610)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x16476C80)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x164785F0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x16477230)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x16476C70)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x16476BD0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x16476C50)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x16477B00)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_UPDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x16476DD0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_VALIDATEINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x16478BE0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x16479030)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStateDrivenCamera_TypeDefinitionIndex = 38453;

	class CinemachineStateDrivenCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Transform* m_Follow; // 0x70
		::UnityEngine::Animator* m_AnimatedTarget; // 0x78
		::System::Int32 m_LayerIndex; // 0x80
		::System::Boolean m_ShowDebugText; // 0x84
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* m_ChildCameras; // 0x88
		::Il2CppArray<::Cinemachine::CinemachineStateDrivenCamera_Instruction>* m_Instructions; // 0x90
		::Cinemachine::CinemachineBlendDefinition m_DefaultBlend; // 0x98
		::Cinemachine::CinemachineBlenderSettings* m_CustomBlends; // 0xA8
		::Il2CppArray<::Cinemachine::CinemachineStateDrivenCamera_ParentHash>* m_ParentHash; // 0xB0
		::Cinemachine::ICinemachineCamera* _LiveChild_k__BackingField; // 0xB8
		::Cinemachine::ICinemachineCamera* _TransitioningFrom_k__BackingField; // 0xC0
		::Cinemachine::CameraState m_State; // 0xC8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationClip*, ::System::Collections::Generic::List_1<::Cinemachine::CinemachineStateDrivenCamera_HashPair>*>* mHashCache; // 0x1A8
		::System::Single mActivationTime; // 0x1B0
		::Cinemachine::CinemachineStateDrivenCamera_Instruction mActiveInstruction; // 0x1B8
		::System::Single mPendingActivationTime; // 0x1D0
		::Cinemachine::CinemachineStateDrivenCamera_Instruction mPendingInstruction; // 0x1D8
		::Cinemachine::CinemachineBlend* mActiveBlend; // 0x1F0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* mInstructionDictionary; // 0x1F8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* mStateParentLookup; // 0x200
		::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* m_clipInfoList; // 0x208

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA__CTOR_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_LIVECHILD_OFFSET))(this, a1);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_LIVECHILD_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ISLIVECHILD_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_LOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_FOLLOW_OFFSET))(this, a1);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::Cinemachine::ICinemachineCamera* get_TransitioningFrom()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_TRANSITIONINGFROM_OFFSET))(this);
		}

		::System::Void set_TransitioningFrom(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_TRANSITIONINGFROM_OFFSET))(this, a1);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void OnGuiHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONGUIHANDLER_OFFSET))(this);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* get_ChildCameras()
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_CHILDCAMERAS_OFFSET))(this);
		}

		::System::Boolean get_IsBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_ISBLENDING_OFFSET))(this);
		}

		static ::System::Int32 CreateFakeHash(::System::Int32 a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_CREATEFAKEHASH_OFFSET))(a1, a2);
		}

		::System::Int32 LookupFakeHash(::System::Int32 a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_LOOKUPFAKEHASH_OFFSET))(this, a1, a2);
		}

		::System::Void InvalidateListOfChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_INVALIDATELISTOFCHILDREN_OFFSET))(this);
		}

		::System::Void UpdateListOfChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_UPDATELISTOFCHILDREN_OFFSET))(this);
		}

		::System::Void ValidateInstructions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_VALIDATEINSTRUCTIONS_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCameraBase* ChooseCurrentCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_CHOOSECURRENTCAMERA_OFFSET))(this);
		}

		::System::Int32 GetClipHash(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GETCLIPHASH_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineBlendDefinition LookupBlend(::Cinemachine::ICinemachineCamera* a1, ::Cinemachine::ICinemachineCamera* a2)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_LOOKUPBLEND_OFFSET))(this, a1, a2);
		}
	};
}
