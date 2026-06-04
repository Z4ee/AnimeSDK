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

#define AKEVENTPLAYABLEBEHAVIOR_CALLBACKHANDLER_OFFSET UNITYSDK_OFFSET(0x1B431020)
#define AKEVENTPLAYABLEBEHAVIOR_CHECKFORFADEINFADEOUT_OFFSET UNITYSDK_OFFSET(0x1B431680)
#define AKEVENTPLAYABLEBEHAVIOR_CHECKFORFADEOUT_OFFSET UNITYSDK_OFFSET(0x1B4317E0)
#define AKEVENTPLAYABLEBEHAVIOR_GETPROPORTIONALTIME_OFFSET UNITYSDK_OFFSET(0x1B431A90)
#define AKEVENTPLAYABLEBEHAVIOR_ISSCRUBBING_OFFSET UNITYSDK_OFFSET(0x1B431190)
#define AKEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B431BF0)
#define AKEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B4318A0)
#define AKEVENTPLAYABLEBEHAVIOR_PLAYEVENT_OFFSET UNITYSDK_OFFSET(0x1B431F80)
#define AKEVENTPLAYABLEBEHAVIOR_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x1B432520)
#define AKEVENTPLAYABLEBEHAVIOR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1B431200)
#define AKEVENTPLAYABLEBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B431D90)
#define AKEVENTPLAYABLEBEHAVIOR_RETRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x1B4320E0)
#define AKEVENTPLAYABLEBEHAVIOR_SEEKTOTIME_OFFSET UNITYSDK_OFFSET(0x1B431FE0)
#define AKEVENTPLAYABLEBEHAVIOR_SHOULDPLAY_OFFSET UNITYSDK_OFFSET(0x1B431500)
#define AKEVENTPLAYABLEBEHAVIOR_STOPEVENT_OFFSET UNITYSDK_OFFSET(0x1B431CA0)
#define AKEVENTPLAYABLEBEHAVIOR_TRIGGERFADEIN_OFFSET UNITYSDK_OFFSET(0x1B4321A0)
#define AKEVENTPLAYABLEBEHAVIOR_TRIGGERFADEOUT_OFFSET UNITYSDK_OFFSET(0x1B4323A0)
#define AKEVENTPLAYABLEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B432690)
#define AKEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B4326C0)
#define AKEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B4326B0)
#define AKEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1B4326A0)
#define AKEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B4326D0)

inline static constexpr unsigned int AkEventPlayableBehavior_TypeDefinitionIndex = 41308;

class AkEventPlayableBehavior : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::UInt32 CallbackFlags = 0x9; // 0x0
	// static const ::System::Int32 scrubPlaybackLengthMs = 0x64; // 0x0
	// static const ::System::Single alph; // 0x0
	::UnityEngine::GameObject* eventObject; // 0x10
	::AK::Wwise::Event* akEvent; // 0x18
	::System::Single eventDurationMin; // 0x20
	::System::Single blendInDuration; // 0x24
	::System::Single previousEventStartTime; // 0x28
	::AkEventPlayableBehavior_Actions requiredActions; // 0x2C
	::AkCurveInterpolation blendOutCurve; // 0x30
	::System::Boolean fadeinTriggered; // 0x34
	::System::Boolean eventIsPlaying; // 0x35
	::System::Boolean fadeoutTriggered; // 0x36
	::System::Single currentDuration; // 0x38
	::System::Single eventDurationMax; // 0x3C
	::System::Boolean StopEventAtClipEnd; // 0x40
	::System::Boolean wasScrubbingAndRequiresRetrigger; // 0x41
	::System::Boolean retriggerEvent; // 0x42
	::System::Boolean overrideTrackEmitterObject; // 0x43
	::System::Single blendOutDuration; // 0x44
	::System::Single easeOutDuration; // 0x48
	::AkCurveInterpolation blendInCurve; // 0x4C
	::System::Single easeInDuration; // 0x50
	::System::Single currentDurationProportion; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR__CTOR_OFFSET))(this);
	}

	::System::Void CallbackHandler(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_CALLBACKHANDLER_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean IsScrubbing(::UnityEngine::Playables::FrameData a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_ISSCRUBBING_OFFSET))(this, a1);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean ShouldPlay(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_SHOULDPLAY_OFFSET))(this, a1);
	}

	::System::Void CheckForFadeInFadeOut(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_CHECKFORFADEINFADEOUT_OFFSET))(this, a1);
	}

	::System::Void CheckForFadeOut(::UnityEngine::Playables::Playable a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Double))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_CHECKFORFADEOUT_OFFSET))(this, a1, a2);
	}

	::System::Void TriggerFadeIn(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_TRIGGERFADEIN_OFFSET))(this, a1);
	}

	::System::Void TriggerFadeOut(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_TRIGGERFADEOUT_OFFSET))(this, a1);
	}

	::System::Void StopEvent(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_STOPEVENT_OFFSET))(this, a1);
	}

	::System::Boolean PostEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_POSTEVENT_OFFSET))(this);
	}

	::System::Void PlayEvent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_PLAYEVENT_OFFSET))(this);
	}

	::System::Void RetriggerEvent(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_RETRIGGEREVENT_OFFSET))(this, a1);
	}

	::System::Single GetProportionalTime(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_GETPROPORTIONALTIME_OFFSET))(this, a1);
	}

	::System::Single SeekToTime(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR_SEEKTOTIME_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};
