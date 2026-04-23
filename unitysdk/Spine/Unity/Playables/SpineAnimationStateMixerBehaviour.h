#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace Spine { class AnimationState; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class IAnimationStateComponent; }
namespace Spine::Unity { class ISkeletonComponent; }
namespace Spine::Unity { class SkeletonAnimation; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity::Playables { class SpineAnimationStateBehaviour; }
namespace System { class Object; }

#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ADJUSTTRACKENTRYTIMESCALE_OFFSET UNITYSDK_OFFSET(0x19E27000)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_GETCUSTOMMIXDURATION_OFFSET UNITYSDK_OFFSET(0x19E292D0)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_GETROOTPLAYABLESPEED_OFFSET UNITYSDK_OFFSET(0x19E29090)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLECLIPEND_OFFSET UNITYSDK_OFFSET(0x19E26C70)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLEPAUSE_OFFSET UNITYSDK_OFFSET(0x19E26A40)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLERESUME_OFFSET UNITYSDK_OFFSET(0x19E26E90)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x19E26A10)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x19E26E70)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x19E26C50)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_PREVIEWEDITMODEPOSE_OFFSET UNITYSDK_OFFSET(0x19E282E0)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19E27210)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19E293E0)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineAnimationStateMixerBehaviour_TypeDefinitionIndex = 40903;

	class SpineAnimationStateMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Spine::AnimationState* dummyAnimationState; // 0x10
		::Il2CppArray<::System::Single>* lastInputWeights; // 0x18
		::Il2CppArray<::UnityEngine::Playables::ScriptPlayable_1<::Spine::Unity::Playables::SpineAnimationStateBehaviour*>>* startingClips; // 0x20
		::Spine::TrackEntry* pausedTrackEntry; // 0x28
		::Spine::Unity::IAnimationStateComponent* animationStateComponent; // 0x30
		::Spine::TrackEntry* timelineStartedTrackEntry; // 0x38
		::System::Single rootPlayableSpeed; // 0x40
		::System::Boolean endAtClipEnd; // 0x44
		::System::Boolean pauseWithDirector; // 0x45
		::System::Boolean lastAnyClipPlaying; // 0x46
		::System::Boolean isPaused; // 0x47
		::System::Boolean unscaledTime; // 0x48
		::System::Single previousTimeScale; // 0x4C
		::System::Single endMixOutDuration; // 0x50
		::System::Int32 trackIndex; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, playable);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void HandlePause(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLEPAUSE_OFFSET))(this, playable);
		}

		::System::Void HandleResume(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLERESUME_OFFSET))(this, playable);
		}

		::System::Void HandleClipEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLECLIPEND_OFFSET))(this);
		}

		::System::Void AdjustTrackEntryTimeScale(::UnityEngine::Playables::Playable playable, ::System::Int32 input, ::Spine::TrackEntry* currentTrackEntry)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Int32, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ADJUSTTRACKENTRYTIMESCALE_OFFSET))(this, playable, input, currentTrackEntry);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void PreviewEditModePose(::UnityEngine::Playables::Playable playable, ::Spine::Unity::ISkeletonComponent* skeletonComponent, ::Spine::Unity::IAnimationStateComponent* animationStateComponent, ::Spine::Unity::SkeletonAnimation* skeletonAnimation, ::Spine::Unity::SkeletonGraphic* skeletonGraphic)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::Spine::Unity::ISkeletonComponent*, ::Spine::Unity::IAnimationStateComponent*, ::Spine::Unity::SkeletonAnimation*, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_PREVIEWEDITMODEPOSE_OFFSET))(this, playable, skeletonComponent, animationStateComponent, skeletonAnimation, skeletonGraphic);
		}

		::System::Single GetRootPlayableSpeed(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_GETROOTPLAYABLESPEED_OFFSET))(this, playable);
		}

		::System::Single GetCustomMixDuration(::Spine::Unity::Playables::SpineAnimationStateBehaviour* clipData)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::Unity::Playables::SpineAnimationStateBehaviour*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_GETCUSTOMMIXDURATION_OFFSET))(this, clipData);
		}
	};
}
