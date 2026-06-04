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

#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ADJUSTTRACKENTRYTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1ACA1C30)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_GETCUSTOMMIXDURATION_OFFSET UNITYSDK_OFFSET(0x1ACA3D10)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_GETROOTPLAYABLESPEED_OFFSET UNITYSDK_OFFSET(0x1ACA3AD0)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLECLIPEND_OFFSET UNITYSDK_OFFSET(0x1ACA18B0)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLEPAUSE_OFFSET UNITYSDK_OFFSET(0x1ACA1690)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLERESUME_OFFSET UNITYSDK_OFFSET(0x1ACA1AD0)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1ACA1660)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1ACA1AB0)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1ACA1890)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_PREVIEWEDITMODEPOSE_OFFSET UNITYSDK_OFFSET(0x1ACA2D90)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1ACA1DD0)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACA3E20)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineAnimationStateMixerBehaviour_TypeDefinitionIndex = 41729;

	class SpineAnimationStateMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Spine::TrackEntry* timelineStartedTrackEntry; // 0x10
		::Il2CppArray<::UnityEngine::Playables::ScriptPlayable_1<::Spine::Unity::Playables::SpineAnimationStateBehaviour*>>* startingClips; // 0x18
		::Spine::AnimationState* dummyAnimationState; // 0x20
		::Spine::Unity::IAnimationStateComponent* animationStateComponent; // 0x28
		::Spine::TrackEntry* pausedTrackEntry; // 0x30
		::Il2CppArray<::System::Single>* lastInputWeights; // 0x38
		::System::Boolean pauseWithDirector; // 0x40
		::System::Single previousTimeScale; // 0x44
		::System::Single endMixOutDuration; // 0x48
		::System::Int32 trackIndex; // 0x4C
		::System::Boolean lastAnyClipPlaying; // 0x50
		::System::Boolean isPaused; // 0x51
		::System::Boolean unscaledTime; // 0x52
		::System::Boolean endAtClipEnd; // 0x53
		::System::Single rootPlayableSpeed; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void HandlePause(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLEPAUSE_OFFSET))(this, a1);
		}

		::System::Void HandleResume(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLERESUME_OFFSET))(this, a1);
		}

		::System::Void HandleClipEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLECLIPEND_OFFSET))(this);
		}

		::System::Void AdjustTrackEntryTimeScale(::UnityEngine::Playables::Playable a1, ::System::Int32 a2, ::Spine::TrackEntry* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Int32, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ADJUSTTRACKENTRYTIMESCALE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PreviewEditModePose(::UnityEngine::Playables::Playable a1, ::Spine::Unity::ISkeletonComponent* a2, ::Spine::Unity::IAnimationStateComponent* a3, ::Spine::Unity::SkeletonAnimation* a4, ::Spine::Unity::SkeletonGraphic* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::Spine::Unity::ISkeletonComponent*, ::Spine::Unity::IAnimationStateComponent*, ::Spine::Unity::SkeletonAnimation*, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_PREVIEWEDITMODEPOSE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single GetRootPlayableSpeed(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_GETROOTPLAYABLESPEED_OFFSET))(this, a1);
		}

		::System::Single GetCustomMixDuration(::Spine::Unity::Playables::SpineAnimationStateBehaviour* a1)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::Unity::Playables::SpineAnimationStateBehaviour*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_GETCUSTOMMIXDURATION_OFFSET))(this, a1);
		}
	};
}
