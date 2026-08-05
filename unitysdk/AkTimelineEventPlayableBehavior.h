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

#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_CALLBACKHANDLER_OFFSET UNITYSDK_OFFSET(0x1F87ECA0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_CHECKFORFADEINFADEOUT_OFFSET UNITYSDK_OFFSET(0x1F880300)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_CHECKFORFADEOUT_OFFSET UNITYSDK_OFFSET(0x1F880440)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_GETPROPORTIONALTIME_OFFSET UNITYSDK_OFFSET(0x1F8809C0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_ISSCRUBBING_OFFSET UNITYSDK_OFFSET(0x1F87EDB0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1F880B80)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F8804E0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_PLAYEVENT_OFFSET UNITYSDK_OFFSET(0x1F8812D0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x1F8817B0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1F87FAB0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_PRINTINFO_OFFSET UNITYSDK_OFFSET(0x1F87EEE0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1F880D60)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_RETRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x1F881450)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_SEEKTOTIME_OFFSET UNITYSDK_OFFSET(0x1F881370)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_SHOULDPLAY_OFFSET UNITYSDK_OFFSET(0x1F880150)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_STOPEVENT_OFFSET UNITYSDK_OFFSET(0x1F880D20)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_TRIGGERFADEIN_OFFSET UNITYSDK_OFFSET(0x1F881580)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_TRIGGERFADEOUT_OFFSET UNITYSDK_OFFSET(0x1F881680)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F881840)

inline static constexpr unsigned int AkTimelineEventPlayableBehavior_TypeDefinitionIndex = 33733;

class AkTimelineEventPlayableBehavior : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::UInt32 CallbackFlags = 0x9; // 0x0
	// static const ::System::Int32 scrubPlaybackLengthMs = 0x64; // 0x0
	// static const ::System::Single alph; // 0x0
	::UnityEngine::GameObject* eventObject; // 0x10
	::AK::Wwise::Event* akEvent; // 0x18
	::AkCurveInterpolation blendOutCurve; // 0x20
	::System::Single eventDurationMax; // 0x24
	::System::Boolean wasScrubbingAndRequiresRetrigger; // 0x28
	::System::Boolean fadeoutTriggered; // 0x29
	::System::Boolean fadeinTriggered; // 0x2A
	::AkCurveInterpolation blendInCurve; // 0x2C
	::System::Single blendInDuration; // 0x30
	::System::Boolean PrintDebugInformation; // 0x34
	::System::Boolean retriggerEvent; // 0x35
	::System::Boolean eventIsPlaying; // 0x36
	::System::Boolean StopEventAtClipEnd; // 0x37
	::System::Single blendOutDuration; // 0x38
	::System::Single easeInDuration; // 0x3C
	::System::Single easeOutDuration; // 0x40
	::System::Single currentDurationProportion; // 0x44
	::AkTimelineEventPlayableBehavior_Actions requiredActions; // 0x48
	::System::Single eventDurationMin; // 0x4C
	::System::Single previousEventStartTime; // 0x50
	::System::Single currentDuration; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR__CTOR_OFFSET))(this);
	}

	::System::Void CallbackHandler(::System::Object* in_cookie, ::AkCallbackType in_type, ::AkCallbackInfo* in_info)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_CALLBACKHANDLER_OFFSET))(this, in_cookie, in_type, in_info);
	}

	::System::Boolean IsScrubbing(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_ISSCRUBBING_OFFSET))(this, playable, info);
	}

	::System::Void PrintInfo(::System::String* FunctionName, ::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_PRINTINFO_OFFSET))(this, FunctionName, playable, info);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_PREPAREFRAME_OFFSET))(this, playable, info);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
	}

	::System::Boolean ShouldPlay(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_SHOULDPLAY_OFFSET))(this, playable);
	}

	::System::Void CheckForFadeInFadeOut(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_CHECKFORFADEINFADEOUT_OFFSET))(this, playable);
	}

	::System::Void CheckForFadeOut(::UnityEngine::Playables::Playable playable, ::System::Double currentClipTime)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Double))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_CHECKFORFADEOUT_OFFSET))(this, playable, currentClipTime);
	}

	::System::Void TriggerFadeIn(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_TRIGGERFADEIN_OFFSET))(this, playable);
	}

	::System::Void TriggerFadeOut(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_TRIGGERFADEOUT_OFFSET))(this, playable);
	}

	::System::Void StopEvent(::System::Int32 transition)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_STOPEVENT_OFFSET))(this, transition);
	}

	::System::Boolean PostEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_POSTEVENT_OFFSET))(this);
	}

	::System::Void PlayEvent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_PLAYEVENT_OFFSET))(this);
	}

	::System::Void RetriggerEvent(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_RETRIGGEREVENT_OFFSET))(this, playable);
	}

	::System::Single GetProportionalTime(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_GETPROPORTIONALTIME_OFFSET))(this, playable);
	}

	::System::Single SeekToTime(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_SEEKTOTIME_OFFSET))(this, playable);
	}
};
