#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/AkEventPlayableBehavior_Actions.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class AkCallbackInfo;
namespace AK::Wwise { class Event; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AKEVENTPLAYABLEBEHAVIOR_CALLBACKHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8BD5E0)
#define AKEVENTPLAYABLEBEHAVIOR_CHECKFORFADEINFADEOUT_OFFSET UNITYSDK_OFFSET(0x1F8BDE10)
#define AKEVENTPLAYABLEBEHAVIOR_CHECKFORFADEOUT_OFFSET UNITYSDK_OFFSET(0x1F8BDF50)
#define AKEVENTPLAYABLEBEHAVIOR_GETPROPORTIONALTIME_OFFSET UNITYSDK_OFFSET(0x1F8BE370)
#define AKEVENTPLAYABLEBEHAVIOR_ISSCRUBBING_OFFSET UNITYSDK_OFFSET(0x1F8BD6F0)
#define AKEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1F8BE530)
#define AKEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F8BDFF0)
#define AKEVENTPLAYABLEBEHAVIOR_PLAYEVENT_OFFSET UNITYSDK_OFFSET(0x1F8BEBB0)
#define AKEVENTPLAYABLEBEHAVIOR_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x1F8BF0A0)
#define AKEVENTPLAYABLEBEHAVIOR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1F8BD700)
#define AKEVENTPLAYABLEBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1F8BE6D0)
#define AKEVENTPLAYABLEBEHAVIOR_RETRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x1F8BED40)
#define AKEVENTPLAYABLEBEHAVIOR_SEEKTOTIME_OFFSET UNITYSDK_OFFSET(0x1F8BEC60)
#define AKEVENTPLAYABLEBEHAVIOR_SHOULDPLAY_OFFSET UNITYSDK_OFFSET(0x1F8BDC30)
#define AKEVENTPLAYABLEBEHAVIOR_STOPEVENT_OFFSET UNITYSDK_OFFSET(0x1F8BE690)
#define AKEVENTPLAYABLEBEHAVIOR_TRIGGERFADEIN_OFFSET UNITYSDK_OFFSET(0x1F8BEE70)
#define AKEVENTPLAYABLEBEHAVIOR_TRIGGERFADEOUT_OFFSET UNITYSDK_OFFSET(0x1F8BEF70)
#define AKEVENTPLAYABLEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8BF140)

inline static constexpr unsigned int AkEventPlayableBehavior_TypeDefinitionIndex = 33784;

class AkEventPlayableBehavior : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::UInt32 CallbackFlags = 0x9; // 0x0
	// static const ::System::Int32 scrubPlaybackLengthMs = 0x64; // 0x0
	// static const ::System::Single alph; // 0x0
	::UnityEngine::GameObject* eventObject; // 0x10
	::AK::Wwise::Event* akEvent; // 0x18
	::System::Single currentDuration; // 0x20
	::System::Boolean retriggerEvent; // 0x24
	::System::Boolean fadeoutTriggered; // 0x25
	::System::Boolean eventIsPlaying; // 0x26
	::System::Boolean fadeinTriggered; // 0x27
	::AkCurveInterpolation blendOutCurve; // 0x28
	::System::Boolean StopEventAtClipEnd; // 0x2C
	::System::Boolean overrideTrackEmitterObject; // 0x2D
	::System::Boolean wasScrubbingAndRequiresRetrigger; // 0x2E
	::System::Single previousEventStartTime; // 0x30
	::System::Single easeInDuration; // 0x34
	::AkCurveInterpolation blendInCurve; // 0x38
	::AkEventPlayableBehavior_Actions requiredActions; // 0x3C
	::System::Single easeOutDuration; // 0x40
	::System::Single currentDurationProportion; // 0x44
	::System::Single blendInDuration; // 0x48
	::System::Single eventDurationMax; // 0x4C
	::System::Single eventDurationMin; // 0x50
	::System::Single blendOutDuration; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR__CTOR_OFFSET))(this);
	}

	::System::Void CallbackHandler(::System::Object* in_cookie, ::AkCallbackType in_type, ::AkCallbackInfo* in_info)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_CALLBACKHANDLER_OFFSET))(this, in_cookie, in_type, in_info);
	}

	::System::Boolean IsScrubbing(::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_ISSCRUBBING_OFFSET))(this, info);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_PREPAREFRAME_OFFSET))(this, playable, info);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
	}

	::System::Boolean ShouldPlay(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_SHOULDPLAY_OFFSET))(this, playable);
	}

	::System::Void CheckForFadeInFadeOut(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_CHECKFORFADEINFADEOUT_OFFSET))(this, playable);
	}

	::System::Void CheckForFadeOut(::UnityEngine::Playables::Playable playable, ::System::Double currentClipTime)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Double))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_CHECKFORFADEOUT_OFFSET))(this, playable, currentClipTime);
	}

	::System::Void TriggerFadeIn(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_TRIGGERFADEIN_OFFSET))(this, playable);
	}

	::System::Void TriggerFadeOut(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_TRIGGERFADEOUT_OFFSET))(this, playable);
	}

	::System::Void StopEvent(::System::Int32 transition)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_STOPEVENT_OFFSET))(this, transition);
	}

	::System::Boolean PostEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_POSTEVENT_OFFSET))(this);
	}

	::System::Void PlayEvent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_PLAYEVENT_OFFSET))(this);
	}

	::System::Void RetriggerEvent(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_RETRIGGEREVENT_OFFSET))(this, playable);
	}

	::System::Single GetProportionalTime(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_GETPROPORTIONALTIME_OFFSET))(this, playable);
	}

	::System::Single SeekToTime(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_SEEKTOTIME_OFFSET))(this, playable);
	}
};
