#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorUpdateMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion::FinalIK { class IK; }
namespace RootMotion::FinalIK { class RagdollUtility_Child; }
namespace RootMotion::FinalIK { class RagdollUtility_Rigidbone; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animator; }

#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_AFTERANIMATION_OFFSET UNITYSDK_OFFSET(0x1F29C860)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_AFTERLASTIK_OFFSET UNITYSDK_OFFSET(0x1F29CCB0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_DISABLERAGDOLLSMOOTH_OFFSET UNITYSDK_OFFSET(0x1F29BBA0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_DISABLERAGDOLL_OFFSET UNITYSDK_OFFSET(0x1F29B8A0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_ENABLERAGDOLL_OFFSET UNITYSDK_OFFSET(0x1F29B7F0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F29C680)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F29C770)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_GET_IKUSED_OFFSET UNITYSDK_OFFSET(0x1F29C9F0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_GET_ISRAGDOLL_OFFSET UNITYSDK_OFFSET(0x1F29B820)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F29C7F0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F29D190)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_ONFINALPOSE_OFFSET UNITYSDK_OFFSET(0x1F29CC20)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_RAGDOLLENABLER_OFFSET UNITYSDK_OFFSET(0x1F29CD50)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_RECORDVELOCITIES_OFFSET UNITYSDK_OFFSET(0x1F29CCE0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_START_OFFSET UNITYSDK_OFFSET(0x1F29BBF0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_STORELOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1F29BA90)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F29C300)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F29D360)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RagdollUtility_TypeDefinitionIndex = 38963;

	class RagdollUtility : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RootMotion::FinalIK::IK* ik; // 0x18
		::System::Single ragdollToAnimationTime; // 0x20
		::System::Boolean applyIkOnRagdoll; // 0x24
		::System::Single applyVelocity; // 0x28
		::System::Single applyAngularVelocity; // 0x2C
		::UnityEngine::Animator* animator; // 0x30
		::Il2CppArray<::RootMotion::FinalIK::RagdollUtility_Rigidbone*>* rigidbones; // 0x38
		::Il2CppArray<::RootMotion::FinalIK::RagdollUtility_Child*>* children; // 0x40
		::System::Boolean enableRagdollFlag; // 0x48
		::UnityEngine::AnimatorUpdateMode animatorUpdateMode; // 0x4C
		::Il2CppArray<::RootMotion::FinalIK::IK*>* allIKComponents; // 0x50
		::Il2CppArray<::System::Boolean>* fixTransforms; // 0x58
		::System::Single ragdollWeight; // 0x60
		::System::Single ragdollWeightV; // 0x64
		::System::Boolean fixedFrame; // 0x68
		::Il2CppArray<::System::Boolean>* disabledIKComponents; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY__CTOR_OFFSET))(this);
		}

		::System::Void EnableRagdoll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_ENABLERAGDOLL_OFFSET))(this);
		}

		::System::Void DisableRagdoll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_DISABLERAGDOLL_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DisableRagdollSmooth()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_DISABLERAGDOLLSMOOTH_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void AfterLastIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_AFTERLASTIK_OFFSET))(this);
		}

		::System::Void AfterAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_AFTERANIMATION_OFFSET))(this);
		}

		::System::Void OnFinalPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_ONFINALPOSE_OFFSET))(this);
		}

		::System::Void RagdollEnabler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_RAGDOLLENABLER_OFFSET))(this);
		}

		::System::Boolean get_isRagdoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_GET_ISRAGDOLL_OFFSET))(this);
		}

		::System::Void RecordVelocities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_RECORDVELOCITIES_OFFSET))(this);
		}

		::System::Boolean get_ikUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_GET_IKUSED_OFFSET))(this);
		}

		::System::Void StoreLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_STORELOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_FIXTRANSFORMS_OFFSET))(this, weight);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_ONDESTROY_OFFSET))(this);
		}
	};
}
