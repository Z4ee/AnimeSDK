#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Animation/GPUIAnimationClipData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace NPCCrowd::Animation { class GPUICrowdTransition; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationData; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationInstancerRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class AnimationClip; }

#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_APPLYTRANSITION_OFFSET UNITYSDK_OFFSET(0x13A05200)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_BLENDANIMATIONS_OFFSET UNITYSDK_OFFSET(0x13A01B00)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_CANCELPREFETCHCLIPTEXTURE_OFFSET UNITYSDK_OFFSET(0x13A07400)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETACTIVEANIMIDS_OFFSET UNITYSDK_OFFSET(0x13A064A0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCLIPDATA_OFFSET UNITYSDK_OFFSET(0x13A02710)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCLIPFRAME_1_OFFSET UNITYSDK_OFFSET(0x13A05BE0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCLIPFRAME_OFFSET UNITYSDK_OFFSET(0x13A05B10)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCLIPTIME_OFFSET UNITYSDK_OFFSET(0x13A04090)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCLIPTOTALTIME_OFFSET UNITYSDK_OFFSET(0x13A05720)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCPUSYNCMAINCLIPSEED_OFFSET UNITYSDK_OFFSET(0x13A05A10)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCPUSYNCMAINCLIPTIMEPROGRESS_OFFSET UNITYSDK_OFFSET(0x13A05420)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCURRENTCLIPINDEX_OFFSET UNITYSDK_OFFSET(0x13A05630)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCURRENTCLIPSPEEDS_OFFSET UNITYSDK_OFFSET(0x13A05960)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETMAINCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x13A05380)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETSLOTLOCALPRS_1_OFFSET UNITYSDK_OFFSET(0x13A06340)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETSLOTLOCALPRS_OFFSET UNITYSDK_OFFSET(0x13A061B0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETSLOTTRANSFORMINDEX_OFFSET UNITYSDK_OFFSET(0x13A06290)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETSPEEDRELATIVESTARTTIME_OFFSET UNITYSDK_OFFSET(0x13A04830)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETSTATESYNCMAINCLIPTIMEPROGRESS_OFFSET UNITYSDK_OFFSET(0x13A058D0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_PREFETCHCLIPTEXTURES_OFFSET UNITYSDK_OFFSET(0x13A06E60)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_PREFETCHCLIPTEXTURE_OFFSET UNITYSDK_OFFSET(0x13A06B90)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_REMOVEFROMTRANSITIONINGANIMATORSSWAPBACK_OFFSET UNITYSDK_OFFSET(0x13A05070)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_RESETANIMATOR_OFFSET UNITYSDK_OFFSET(0x13A00400)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETANIMATIONMANUALLY_OFFSET UNITYSDK_OFFSET(0x13A012A0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETANIMATIONSPEEDS_OFFSET UNITYSDK_OFFSET(0x13A04910)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETANIMATIONSPEED_1_OFFSET UNITYSDK_OFFSET(0x13A04220)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETANIMATIONSPEED_OFFSET UNITYSDK_OFFSET(0x13A041A0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETCLIPTIME_1_OFFSET UNITYSDK_OFFSET(0x13A05DC0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETCLIPTIME_OFFSET UNITYSDK_OFFSET(0x13A05C80)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETLAYERFLAGS_OFFSET UNITYSDK_OFFSET(0x13A06420)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_STARTANIMATION_1_OFFSET UNITYSDK_OFFSET(0x13A00800)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_STARTANIMATION_2_OFFSET UNITYSDK_OFFSET(0x13A00AC0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_STARTANIMATION_OFFSET UNITYSDK_OFFSET(0x13A00720)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_STARTBLEND_1_OFFSET UNITYSDK_OFFSET(0x13A02870)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_STARTBLEND_OFFSET UNITYSDK_OFFSET(0x13A02550)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SYNCSTATUSMANUALLY_OFFSET UNITYSDK_OFFSET(0x13A01980)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_TRYGETANIMATION_OFFSET UNITYSDK_OFFSET(0x13A01730)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR_UPDATEINDEX_OFFSET UNITYSDK_OFFSET(0x13A060C0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13A003F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdAnimator_TypeDefinitionIndex = 59323;

	class NPCCrowdAnimator : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector4>* currentLayerClipStartTimes; // 0x10
		::Il2CppArray<::NPCCrowd::Animation::GPUIAnimationClipData>* newAnimationClipData; // 0x18
		::NPCCrowd::Animation::NPCCrowdAnimationData* crowdAnimPrototype; // 0x20
		::System::Nullable_1<::System::ValueTuple_2<::System::Int32, ::System::Nullable_1<::NPCCrowd::Animation::GPUIAnimationClipData>>> _currentAnimationCache; // 0x28
		::Il2CppArray<::UnityEngine::Vector4>* newLayerClipStartTimes; // 0x78
		::Il2CppArray<::UnityEngine::Vector4>* currentLayerAnimationClipDataWeights; // 0x80
		::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* crowdRuntimeData; // 0x88
		::NPCCrowd::Animation::GPUICrowdTransition* transition; // 0x90
		::Il2CppArray<::Il2CppArray<::NPCCrowd::Animation::GPUIAnimationClipData>*>* currentLayerAnimationClipData; // 0x98
		::Il2CppArray<::Il2CppArray<::System::Single>*>* currentLayerClipSpeeds; // 0xA0
		::System::UInt32 layerFlags; // 0xA8
		::UnityEngine::Vector4 currentAnimationFrames; // 0xAC
		::System::Int32 activeClipCount; // 0xBC
		::System::Int32 gpuAnimationInstanceID; // 0xC0
		::System::Int32 transitionIndex; // 0xC4
		::System::Boolean bIsNeedFlushMBGPUID; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void ResetAnimator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_RESETANIMATOR_OFFSET))(this);
		}

		::System::Void StartAnimation(::System::Int32 animationClipID, ::UnityEngine::AnimationClip* debuggerClipInfo, ::System::Single startTime, ::System::Single speed, ::System::Single transitionTime, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimationClip*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_STARTANIMATION_OFFSET))(this, animationClipID, debuggerClipInfo, startTime, speed, transitionTime, layerIdx);
		}

		::System::Void StartAnimation_1(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Int32 arrayIndex, ::System::Int32 animationClipID, ::UnityEngine::AnimationClip* debuggerClipInfo, ::System::Single startTime, ::System::Single speed, ::System::Single transitionTime, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Int32, ::System::Int32, ::UnityEngine::AnimationClip*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_STARTANIMATION_1_OFFSET))(this, runtimeData, arrayIndex, animationClipID, debuggerClipInfo, startTime, speed, transitionTime, layerIdx);
		}

		::System::Void SetAnimationManually(::System::Int32 animationClipID, ::System::Single animationNormalizedTime, ::System::Int32 layerIdx, ::System::Int32 layerFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETANIMATIONMANUALLY_OFFSET))(this, animationClipID, animationNormalizedTime, layerIdx, layerFlag);
		}

		::System::Boolean TryGetAnimation(::System::Int32 animationClipId, ::NPCCrowd::Animation::GPUIAnimationClipData& animation)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::GPUIAnimationClipData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_TRYGETANIMATION_OFFSET))(this, animationClipId, animation);
		}

		::System::Void SyncStatusManually(::NPCCrowd::Animation::GPUIAnimationClipData animation, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::GPUIAnimationClipData, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SYNCSTATUSMANUALLY_OFFSET))(this, animation, layerIdx);
		}

		::System::Void StartAnimation_2(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Int32 arrayIndex, ::NPCCrowd::Animation::GPUIAnimationClipData clipData, ::System::Single startTime, ::System::Single speed, ::System::Single transitionTime, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Int32, ::NPCCrowd::Animation::GPUIAnimationClipData, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_STARTANIMATION_2_OFFSET))(this, runtimeData, arrayIndex, clipData, startTime, speed, transitionTime, layerIdx);
		}

		::System::Void StartBlend(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Int32 arrayIndex, ::UnityEngine::Vector4 animationWeights, ::System::Int32 animationClip1, ::System::Int32 animationClip2, ::System::Int32 animationClip3, ::System::Int32 animationClip4, ::Il2CppArray<::System::Single>* animationTimes, ::Il2CppArray<::System::Single>* animationSpeeds, ::System::Single transitionTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Int32, ::UnityEngine::Vector4, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_STARTBLEND_OFFSET))(this, runtimeData, arrayIndex, animationWeights, animationClip1, animationClip2, animationClip3, animationClip4, animationTimes, animationSpeeds, transitionTime);
		}

		::System::Void StartBlend_1(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Int32 arrayIndex, ::UnityEngine::Vector4 animationWeights, ::NPCCrowd::Animation::GPUIAnimationClipData clipData1, ::NPCCrowd::Animation::GPUIAnimationClipData clipData2, ::NPCCrowd::Animation::GPUIAnimationClipData clipData3, ::NPCCrowd::Animation::GPUIAnimationClipData clipData4, ::Il2CppArray<::System::Single>* animationTimes, ::Il2CppArray<::System::Single>* animationSpeeds, ::System::Single transitionTime, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Int32, ::UnityEngine::Vector4, ::NPCCrowd::Animation::GPUIAnimationClipData, ::NPCCrowd::Animation::GPUIAnimationClipData, ::NPCCrowd::Animation::GPUIAnimationClipData, ::NPCCrowd::Animation::GPUIAnimationClipData, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_STARTBLEND_1_OFFSET))(this, runtimeData, arrayIndex, animationWeights, clipData1, clipData2, clipData3, clipData4, animationTimes, animationSpeeds, transitionTime, layerIdx);
		}

		::System::Void SetAnimationSpeed(::System::Single animationSpeed, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETANIMATIONSPEED_OFFSET))(this, animationSpeed, layerIdx);
		}

		::System::Void SetAnimationSpeed_1(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Int32 arrayIndex, ::System::Single animationSpeed, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETANIMATIONSPEED_1_OFFSET))(this, runtimeData, arrayIndex, animationSpeed, layerIdx);
		}

		::System::Void SetAnimationSpeeds(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Int32 arrayIndex, ::Il2CppArray<::System::Single>* animationSpeeds, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETANIMATIONSPEEDS_OFFSET))(this, runtimeData, arrayIndex, animationSpeeds, layerIdx);
		}

		::System::Void RemoveFromTransitioningAnimatorsSwapBack(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_REMOVEFROMTRANSITIONINGANIMATORSSWAPBACK_OFFSET))(this, runtimeData);
		}

		::System::Boolean ApplyTransition(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Single currentTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_APPLYTRANSITION_OFFSET))(this, runtimeData, currentTime);
		}

		::System::Single GetMainClipLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETMAINCLIPLENGTH_OFFSET))(this);
		}

		::System::Single GetCPUSyncMainClipTimeProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCPUSYNCMAINCLIPTIMEPROGRESS_OFFSET))(this);
		}

		::System::Single GetStateSyncMainClipTimeProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETSTATESYNCMAINCLIPTIMEPROGRESS_OFFSET))(this);
		}

		::System::Single GetClipTime(::NPCCrowd::Animation::GPUIAnimationClipData clipData, ::System::Int32 layerIdx)
		{
			return ((::System::Single(*)(::PVOID, ::NPCCrowd::Animation::GPUIAnimationClipData, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCLIPTIME_OFFSET))(this, clipData, layerIdx);
		}

		::System::Single GetClipTotalTime(::System::Int32 clipIndex, ::System::Single currentTime, ::System::Int32 layerIdx)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCLIPTOTALTIME_OFFSET))(this, clipIndex, currentTime, layerIdx);
		}

		::System::Single GetCurrentClipSpeeds(::System::Int32 clipIndex, ::System::Int32 layerIdx)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCURRENTCLIPSPEEDS_OFFSET))(this, clipIndex, layerIdx);
		}

		::System::Single GetCPUSyncMainClipSeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCPUSYNCMAINCLIPSEED_OFFSET))(this);
		}

		::System::Single GetClipFrame(::System::Int32 clipIndex, ::System::Single currentTime, ::System::Single clipLength, ::System::Int32 clipFrameCount, ::System::Boolean isLoopDisabled, ::System::Int32 layerIdx)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCLIPFRAME_OFFSET))(this, clipIndex, currentTime, clipLength, clipFrameCount, isLoopDisabled, layerIdx);
		}

		static ::System::Single GetClipFrame_1(::System::Single clipTotalTime, ::System::Single clipLength, ::System::Int32 clipFrameCount, ::System::Boolean isLoopDisabled)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCLIPFRAME_1_OFFSET))(clipTotalTime, clipLength, clipFrameCount, isLoopDisabled);
		}

		::System::Void SetClipTime(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Int32 arrayIndex, ::System::Int32 clipID, ::System::Single time, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETCLIPTIME_OFFSET))(this, runtimeData, arrayIndex, clipID, time, layerIdx);
		}

		::System::Void SetClipTime_1(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Int32 arrayIndex, ::NPCCrowd::Animation::GPUIAnimationClipData clipData, ::System::Single time, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Int32, ::NPCCrowd::Animation::GPUIAnimationClipData, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETCLIPTIME_1_OFFSET))(this, runtimeData, arrayIndex, clipData, time, layerIdx);
		}

		::System::Void UpdateIndex(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_UPDATEINDEX_OFFSET))(this, runtimeData, arrayIndex);
		}

		::NPCCrowd::Animation::GPUIAnimationClipData GetClipData(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Int32 clipID)
		{
			return ((::NPCCrowd::Animation::GPUIAnimationClipData(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCLIPDATA_OFFSET))(this, runtimeData, clipID);
		}

		::NPCCrowd::Ability::FTransformFragment GetSlotLocalPRS(::System::String* boneTransformName)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETSLOTLOCALPRS_OFFSET))(this, boneTransformName);
		}

		::System::Int32 GetSlotTransformIndex(::System::String* boneTransformName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETSLOTTRANSFORMINDEX_OFFSET))(this, boneTransformName);
		}

		::NPCCrowd::Ability::FTransformFragment GetSlotLocalPRS_1(::System::Int32 transformIndex)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETSLOTLOCALPRS_1_OFFSET))(this, transformIndex);
		}

		::System::Void BlendAnimations(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Int32 arrayIndex, ::System::Boolean hasTransition, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_BLENDANIMATIONS_OFFSET))(this, runtimeData, arrayIndex, hasTransition, layerIdx);
		}

		::System::Void SetLayerFlags(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::System::Int32 arrayIndex, ::System::UInt32 layerFlags)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_SETLAYERFLAGS_OFFSET))(this, runtimeData, arrayIndex, layerFlags);
		}

		::System::Single GetSpeedRelativeStartTime(::System::Single currentTime, ::System::Single previousStartTime, ::System::Single previousSpeed, ::System::Single clipLength, ::System::Single newSpeed)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETSPEEDRELATIVESTARTTIME_OFFSET))(this, currentTime, previousStartTime, previousSpeed, clipLength, newSpeed);
		}

		::System::Int32 GetCurrentClipIndex(::NPCCrowd::Animation::GPUIAnimationClipData clipData, ::System::Int32 layerIdx)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::GPUIAnimationClipData, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETCURRENTCLIPINDEX_OFFSET))(this, clipData, layerIdx);
		}

		::System::Void GetActiveAnimIds(::System::Collections::Generic::HashSet_1<::System::Int32>* activeAnimIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_GETACTIVEANIMIDS_OFFSET))(this, activeAnimIds);
		}

		::System::Void PrefetchClipTexture(::System::Int32 animationClipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_PREFETCHCLIPTEXTURE_OFFSET))(this, animationClipID);
		}

		::System::Void PrefetchClipTextures(::System::Collections::Generic::IEnumerable_1<::System::Int32>* animationClipIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_PREFETCHCLIPTEXTURES_OFFSET))(this, animationClipIDs);
		}

		::System::Void CancelPrefetchClipTexture(::System::Int32 animationClipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATOR_CANCELPREFETCHCLIPTEXTURE_OFFSET))(this, animationClipID);
		}
	};
}
