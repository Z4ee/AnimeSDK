#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System { class Object; }

#define CLASS_2_9DE16DBF558A149B_GET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0x1061A5E0)
#define CLASS_2_9DE16DBF558A149B_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1061A650)
#define CLASS_2_9DE16DBF558A149B_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1061A600)
#define CLASS_2_9DE16DBF558A149B_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1061ABE0)
#define CLASS_2_9DE16DBF558A149B_SET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0x1061A5F0)
#define CLASS_2_9DE16DBF558A149B__CTOR_OFFSET UNITYSDK_OFFSET(0x1061B110)
#define CLASS_2_9DE16DBF558A149B___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1061B130)
#define CLASS_2_9DE16DBF558A149B___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1061B120)
#define CLASS_2_9DE16DBF558A149B___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1061B140)

inline static constexpr unsigned int Class_2_9DE16DBF558A149B_TypeDefinitionIndex = 46042;

class Class_2_9DE16DBF558A149B : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPG::Client::MonoEmoPlayableGraph* Field_2_0; // 0x10
	::RPGTools::Timeline::Emotion::EmoTrackType _TrackType_k__BackingField; // 0x18
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::Emotion::EmoTrackType get_TrackType()
	{
		return ((::RPGTools::Timeline::Emotion::EmoTrackType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B_GET_TRACKTYPE_OFFSET))(this);
	}

	::System::Void set_TrackType(::RPGTools::Timeline::Emotion::EmoTrackType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B_SET_TRACKTYPE_OFFSET))(this, a1);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};
