#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Photo/LookAtBoneConfig.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootOnGroundSegment.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Blend2dData;
namespace NPCCrowd::Animation { class AnimationControllerInstanceEntry; }
namespace NPCCrowd::Animation { class AnimationControllerTemplateConfig; }
namespace NPCCrowd::Animation { class ICPUAnimationLib; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ISVALID_OFFSET UNITYSDK_OFFSET(0x12D10790)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D10750)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12D10A20)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D10B60)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationControllerInstanceConfig_TypeDefinitionIndex = 68354;

	class AnimationControllerInstanceConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		// static const ::System::String* CurvesGeneration; // 0x0
		// static const ::System::String* BonesName; // 0x0
		// static const ::System::String* MotionControl; // 0x0
		// static const ::System::String* AdjustmentBlending; // 0x0
		// static const ::System::String* FootStep; // 0x0
		// static const ::System::String* BoneAdjustTag; // 0x0
		::NPCCrowd::Animation::AnimationControllerTemplateConfig* templateConfig; // 0x58
		::NPCCrowd::Animation::ICPUAnimationLib* AnimationLib; // 0x60
		::System::Boolean animationControllerConfig; // 0x68
		::Il2CppArray<::NPCCrowd::Animation::AnimationControllerInstanceEntry*>* instances; // 0x70
		::Il2CppArray<::System::String*>* adjustBones; // 0x78
		::System::String* leftFootBoneName; // 0x80
		::System::String* rightFootBoneName; // 0x88
		::System::String* leftHandBoneName; // 0x90
		::System::String* rightHandBoneName; // 0x98
		::System::String* bip001BoneName; // 0xA0
		::System::String* bip001HeadBoneName; // 0xA8
		::System::String* pelvisBoneName; // 0xB0
		::System::String* spineBoneName; // 0xB8
		::System::String* spine1BoneName; // 0xC0
		::System::String* spine2BoneName; // 0xC8
		::System::String* rootBoneName; // 0xD0
		::System::String* neckBoneName; // 0xD8
		::System::String* leftToeBoneName; // 0xE0
		::System::String* rightToeBoneName; // 0xE8
		::Il2CppArray<::MoleMole::Photo::LookAtBoneConfig>* lookAtSpines; // 0xF0
		::MoleMole::Photo::LookAtBoneConfig lookAtHead; // 0xF8
		::Il2CppArray<::MoleMole::Photo::LookAtBoneConfig>* lookAtEyes; // 0x110
		::System::Single lookAtSpineWeight; // 0x118
		::System::Single lookAtHeadWeight; // 0x11C
		::System::Single lookAtEyeWeight; // 0x120
		::System::Single lookAtSpineClampWeight; // 0x124
		::System::Single lookAtHeadClampWeight; // 0x128
		::System::Single lookAtEyeClampWeight; // 0x12C
		::System::Int32 lookAtClampSmoothingIteration; // 0x130
		::UnityEngine::AnimationCurve* lookAtSpineWeightCurve; // 0x138
		::UnityEngine::Vector3 lookAtSpineTargetOffset; // 0x140
		::System::Single startStretchRatio; // 0x14C
		::System::Single maxStretchRatio; // 0x150
		::System::Single blendTime; // 0x154
		::System::Single maxCastDistance; // 0x158
		::System::Single legLength; // 0x15C
		::System::Single footHeight; // 0x160
		::System::Single animUpStairHeight; // 0x164
		::System::Single animDownStairHeight; // 0x168
		::System::Single maxVelocity; // 0x16C
		::System::Single maxAngularVelocity; // 0x170
		::UnityEngine::Vector3 toeOffset; // 0x174
		::UnityEngine::Vector3 heelOffset; // 0x180
		::System::Single pelvisVelocity; // 0x18C
		::System::Single pelvisThreshold; // 0x190
		::System::Single pelvisStiffness; // 0x194
		::System::Single pelvisDamping; // 0x198
		::Il2CppArray<::System::Int32>* animIds; // 0x1A0
		::Il2CppArray<::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment>*>* leftFootOnGroundSegments; // 0x1A8
		::Il2CppArray<::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment>*>* rightFootOnGroundSegments; // 0x1B0
		::Il2CppArray<::System::Single>* speedScales; // 0x1B8
		::Blend2dData* boneAdjustBlend2dData; // 0x1C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Boolean IsValid(::System::Int32 instanceIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ISVALID_OFFSET))(this, instanceIndex);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
