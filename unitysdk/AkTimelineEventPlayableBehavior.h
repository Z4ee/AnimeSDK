#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/AkTimelineEventPlayableBehavior_Actions.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class AkCallbackInfo;
namespace AK::Wwise { class Event; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_CALLBACKHANDLER_OFFSET UNITYSDK_OFFSET(0x1B4AFDA0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_CHECKFORFADEINFADEOUT_OFFSET UNITYSDK_OFFSET(0x1B4B10E0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_CHECKFORFADEOUT_OFFSET UNITYSDK_OFFSET(0x1B4B1240)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_GETPROPORTIONALTIME_OFFSET UNITYSDK_OFFSET(0x1B4B14D0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_ISSCRUBBING_OFFSET UNITYSDK_OFFSET(0x1B4B00A0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B4B1630)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B4B1300)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_PLAYEVENT_OFFSET UNITYSDK_OFFSET(0x1B4B1E70)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x1B4B28A0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1B4B0AB0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_PRINTINFO_OFFSET UNITYSDK_OFFSET(0x1B4B03E0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B4B1920)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_RETRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x1B4B1FD0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_SEEKTOTIME_OFFSET UNITYSDK_OFFSET(0x1B4B1ED0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_SHOULDPLAY_OFFSET UNITYSDK_OFFSET(0x1B4B0FA0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_STOPEVENT_OFFSET UNITYSDK_OFFSET(0x1B4B1830)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_TRIGGERFADEIN_OFFSET UNITYSDK_OFFSET(0x1B4B2090)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_TRIGGERFADEOUT_OFFSET UNITYSDK_OFFSET(0x1B4B2290)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B2B90)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B4B2BC0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B4B2BB0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1B4B2BA0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B4B2BD0)

inline static constexpr unsigned int AkTimelineEventPlayableBehavior_TypeDefinitionIndex = 41256;

class AkTimelineEventPlayableBehavior : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::UInt32 CallbackFlags = 0x9; // 0x0
	// static const ::System::Int32 scrubPlaybackLengthMs = 0x64; // 0x0
	// static const ::System::Single alph; // 0x0
	::UnityEngine::GameObject* eventObject; // 0x10
	::AK::Wwise::Event* akEvent; // 0x18
	::System::Single currentDurationProportion; // 0x20
	::AkCurveInterpolation blendInCurve; // 0x24
	::System::Single easeOutDuration; // 0x28
	::System::Single easeInDuration; // 0x2C
	::System::Single blendInDuration; // 0x30
	::System::Single previousEventStartTime; // 0x34
	::System::Boolean retriggerEvent; // 0x38
	::System::Boolean fadeinTriggered; // 0x39
	::System::Boolean StopEventAtClipEnd; // 0x3A
	::System::Single blendOutDuration; // 0x3C
	::System::Boolean eventIsPlaying; // 0x40
	::System::Boolean PrintDebugInformation; // 0x41
	::System::Boolean fadeoutTriggered; // 0x42
	::System::Boolean wasScrubbingAndRequiresRetrigger; // 0x43
	::System::Single eventDurationMin; // 0x44
	::AkCurveInterpolation blendOutCurve; // 0x48
	::System::Single eventDurationMax; // 0x4C
	::System::Single currentDuration; // 0x50
	::AkTimelineEventPlayableBehavior_Actions requiredActions; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR__CTOR_OFFSET))(this);
	}

	::System::Void CallbackHandler(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_CALLBACKHANDLER_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean IsScrubbing(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_ISSCRUBBING_OFFSET))(this, a1, a2);
	}

	::System::Void PrintInfo(::System::String* a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_PRINTINFO_OFFSET))(this, a1, a2, a3);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean ShouldPlay(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_SHOULDPLAY_OFFSET))(this, a1);
	}

	::System::Void CheckForFadeInFadeOut(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_CHECKFORFADEINFADEOUT_OFFSET))(this, a1);
	}

	::System::Void CheckForFadeOut(::UnityEngine::Playables::Playable a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Double))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_CHECKFORFADEOUT_OFFSET))(this, a1, a2);
	}

	::System::Void TriggerFadeIn(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_TRIGGERFADEIN_OFFSET))(this, a1);
	}

	::System::Void TriggerFadeOut(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_TRIGGERFADEOUT_OFFSET))(this, a1);
	}

	::System::Void StopEvent(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_STOPEVENT_OFFSET))(this, a1);
	}

	::System::Boolean PostEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_POSTEVENT_OFFSET))(this);
	}

	::System::Void PlayEvent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_PLAYEVENT_OFFSET))(this);
	}

	::System::Void RetriggerEvent(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_RETRIGGEREVENT_OFFSET))(this, a1);
	}

	::System::Single GetProportionalTime(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_GETPROPORTIONALTIME_OFFSET))(this, a1);
	}

	::System::Single SeekToTime(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_SEEKTOTIME_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};
