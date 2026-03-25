#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System { class Object; }

#define CLASS_2_9DE16DBF558A149B_GET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0x114447D0)
#define CLASS_2_9DE16DBF558A149B_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x11444840)
#define CLASS_2_9DE16DBF558A149B_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x114447F0)
#define CLASS_2_9DE16DBF558A149B_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11444E50)
#define CLASS_2_9DE16DBF558A149B_SET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0x114447E0)
#define CLASS_2_9DE16DBF558A149B__CTOR_OFFSET UNITYSDK_OFFSET(0x114453E0)
#define CLASS_2_9DE16DBF558A149B___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x11445400)
#define CLASS_2_9DE16DBF558A149B___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x114453F0)
#define CLASS_2_9DE16DBF558A149B___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11445410)

inline static constexpr unsigned int Class_2_9DE16DBF558A149B_TypeDefinitionIndex = 39550;

class Class_2_9DE16DBF558A149B : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPG::Client::MonoEmoPlayableGraph* Field_2_1; // 0x10
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_2_0; // 0x18
	::RPGTools::Timeline::Emotion::EmoTrackType _TrackType_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::Emotion::EmoTrackType get_TrackType()
	{
		return ((::RPGTools::Timeline::Emotion::EmoTrackType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B_GET_TRACKTYPE_OFFSET))(this);
	}

	::System::Void set_TrackType(::RPGTools::Timeline::Emotion::EmoTrackType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B_SET_TRACKTYPE_OFFSET))(this, value);
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

	::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9DE16DBF558A149B___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}
};
