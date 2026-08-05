#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/Unity/SkeletonMecanim_MecanimTranslator_MixMode.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace Spine { class Animation; }
namespace Spine { class Skeleton; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class SkeletonMecanim_MecanimTranslator_ClipInfos; }
namespace Spine::Unity { class SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ADD_ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x1C185E00)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ADD__ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x1C185D00)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x1C186A90)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x1C186510)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLYINTERRUPTIONANIMATION_OFFSET UNITYSDK_OFFSET(0x1C186C20)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLY_OFFSET UNITYSDK_OFFSET(0x1C183BB0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLEARCLIPINFOSFORLAYERS_OFFSET UNITYSDK_OFFSET(0x1C186260)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETACTIVEANIMATIONANDTIME_OFFSET UNITYSDK_OFFSET(0x1C187DD0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATION_OFFSET UNITYSDK_OFFSET(0x1C1867E0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATORCLIPINFOS_OFFSET UNITYSDK_OFFSET(0x1C187BD0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATORSTATEINFOS_OFFSET UNITYSDK_OFFSET(0x1C187C90)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETMIXMODE_OFFSET UNITYSDK_OFFSET(0x1C187D70)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETSTATEUPDATESFROMANIMATOR_OFFSET UNITYSDK_OFFSET(0x1C187780)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1C185F00)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_MECANIMLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C185F10)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_MECANIMLAYERNAMES_OFFSET UNITYSDK_OFFSET(0x1C186060)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INITCLIPINFOSFORLAYERS_OFFSET UNITYSDK_OFFSET(0x1C1875F0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C1836F0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C186B20)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_REMOVE_ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x1C185E80)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_REMOVE__ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x1C185D80)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_TOSPINEANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x1C187FD0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1834F0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_TypeDefinitionIndex = 40126;

	class SkeletonMecanim_MecanimTranslator : public ::System::Object
	{
	public:
		// static const ::System::Single WeightEpsilon; // 0x0
		::System::Boolean autoReset; // 0x10
		::System::Boolean useCustomMixMode; // 0x11
		::Il2CppArray<::Spine::Unity::SkeletonMecanim_MecanimTranslator_MixMode>* layerMixModes; // 0x18
		::Il2CppArray<::Spine::MixBlend>* layerBlendModes; // 0x20
		::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* _OnClipApplied; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Spine::Animation*>* animationTable; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationClip*, ::System::Int32>* clipNameHashCodeTable; // 0x38
		::System::Collections::Generic::List_1<::Spine::Animation*>* previousAnimations; // 0x40
		::Il2CppArray<::Spine::Unity::SkeletonMecanim_MecanimTranslator_ClipInfos*>* layerClipInfos; // 0x48
		::UnityEngine::Animator* animator; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR__CTOR_OFFSET))(this);
		}

		::System::Void add__OnClipApplied(::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ADD__ONCLIPAPPLIED_OFFSET))(this, value);
		}

		::System::Void remove__OnClipApplied(::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_REMOVE__ONCLIPAPPLIED_OFFSET))(this, value);
		}

		::System::Void add_OnClipApplied(::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ADD_ONCLIPAPPLIED_OFFSET))(this, value);
		}

		::System::Void remove_OnClipApplied(::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_REMOVE_ONCLIPAPPLIED_OFFSET))(this, value);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_ANIMATOR_OFFSET))(this);
		}

		::System::Int32 get_MecanimLayerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_MECANIMLAYERCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_MecanimLayerNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_MECANIMLAYERNAMES_OFFSET))(this);
		}

		::System::Void Initialize(::UnityEngine::Animator* animator, ::Spine::Unity::SkeletonDataAsset* skeletonDataAsset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INITIALIZE_OFFSET))(this, animator, skeletonDataAsset);
		}

		::System::Boolean ApplyAnimation(::Spine::Skeleton* skeleton, ::UnityEngine::AnimatorClipInfo info, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex, ::System::Single layerWeight, ::Spine::MixBlend layerBlendMode, ::System::Boolean useClipWeight1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skeleton*, ::UnityEngine::AnimatorClipInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Single, ::Spine::MixBlend, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLYANIMATION_OFFSET))(this, skeleton, info, stateInfo, layerIndex, layerWeight, layerBlendMode, useClipWeight1);
		}

		::System::Boolean ApplyInterruptionAnimation(::Spine::Skeleton* skeleton, ::System::Boolean interpolateWeightTo1, ::UnityEngine::AnimatorClipInfo info, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex, ::System::Single layerWeight, ::Spine::MixBlend layerBlendMode, ::System::Single interruptingClipTimeAddition, ::System::Boolean useClipWeight1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skeleton*, ::System::Boolean, ::UnityEngine::AnimatorClipInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Single, ::Spine::MixBlend, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLYINTERRUPTIONANIMATION_OFFSET))(this, skeleton, interpolateWeightTo1, info, stateInfo, layerIndex, layerWeight, layerBlendMode, interruptingClipTimeAddition, useClipWeight1);
		}

		::System::Void OnClipAppliedCallback(::Spine::Animation* clip, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex, ::System::Single time, ::System::Boolean isLooping, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDCALLBACK_OFFSET))(this, clip, stateInfo, layerIndex, time, isLooping, weight);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLY_OFFSET))(this, skeleton);
		}

		::System::Collections::Generic::KeyValuePair_2<::Spine::Animation*, ::System::Single> GetActiveAnimationAndTime(::System::Int32 layer)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::Spine::Animation*, ::System::Single>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETACTIVEANIMATIONANDTIME_OFFSET))(this, layer);
		}

		static ::System::Single AnimationTime(::System::Single normalizedTime, ::System::Single clipLength, ::System::Boolean loop, ::System::Boolean reversed)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONTIME_OFFSET))(normalizedTime, clipLength, loop, reversed);
		}

		static ::System::Single ToSpineAnimationTime(::System::Single normalizedTime, ::System::Single clipLength, ::System::Boolean loop, ::System::Boolean reversed)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_TOSPINEANIMATIONTIME_OFFSET))(normalizedTime, clipLength, loop, reversed);
		}

		::System::Void InitClipInfosForLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INITCLIPINFOSFORLAYERS_OFFSET))(this);
		}

		::System::Void ClearClipInfosForLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLEARCLIPINFOSFORLAYERS_OFFSET))(this);
		}

		::Spine::Unity::SkeletonMecanim_MecanimTranslator_MixMode GetMixMode(::System::Int32 layer, ::Spine::MixBlend layerBlendMode)
		{
			return ((::Spine::Unity::SkeletonMecanim_MecanimTranslator_MixMode(*)(::PVOID, ::System::Int32, ::Spine::MixBlend))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETMIXMODE_OFFSET))(this, layer, layerBlendMode);
		}

		::System::Void GetStateUpdatesFromAnimator(::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETSTATEUPDATESFROMANIMATOR_OFFSET))(this, layer);
		}

		::System::Void GetAnimatorClipInfos(::System::Int32 layer, ::System::Boolean& isInterruptionActive, ::System::Int32& clipInfoCount, ::System::Int32& nextClipInfoCount, ::System::Int32& interruptingClipInfoCount, ::System::Collections::Generic::IList_1<::UnityEngine::AnimatorClipInfo>*& clipInfo, ::System::Collections::Generic::IList_1<::UnityEngine::AnimatorClipInfo>*& nextClipInfo, ::System::Collections::Generic::IList_1<::UnityEngine::AnimatorClipInfo>*& interruptingClipInfo, ::System::Boolean& shallInterpolateWeightTo1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Collections::Generic::IList_1<::UnityEngine::AnimatorClipInfo>*&, ::System::Collections::Generic::IList_1<::UnityEngine::AnimatorClipInfo>*&, ::System::Collections::Generic::IList_1<::UnityEngine::AnimatorClipInfo>*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATORCLIPINFOS_OFFSET))(this, layer, isInterruptionActive, clipInfoCount, nextClipInfoCount, interruptingClipInfoCount, clipInfo, nextClipInfo, interruptingClipInfo, shallInterpolateWeightTo1);
		}

		::System::Void GetAnimatorStateInfos(::System::Int32 layer, ::System::Boolean& isInterruptionActive, ::UnityEngine::AnimatorStateInfo& stateInfo, ::UnityEngine::AnimatorStateInfo& nextStateInfo, ::UnityEngine::AnimatorStateInfo& interruptingStateInfo, ::System::Single& interruptingClipTimeAddition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&, ::UnityEngine::AnimatorStateInfo&, ::UnityEngine::AnimatorStateInfo&, ::UnityEngine::AnimatorStateInfo&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATORSTATEINFOS_OFFSET))(this, layer, isInterruptionActive, stateInfo, nextStateInfo, interruptingStateInfo, interruptingClipTimeAddition);
		}

		::Spine::Animation* GetAnimation(::UnityEngine::AnimationClip* clip)
		{
			return ((::Spine::Animation*(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATION_OFFSET))(this, clip);
		}
	};
}
