#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System { class Object; }

#define CLASS_2_9DE16DBF558A149B_GET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0x146A8710)
#define CLASS_2_9DE16DBF558A149B_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x146A8780)
#define CLASS_2_9DE16DBF558A149B_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x146A8730)
#define CLASS_2_9DE16DBF558A149B_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x146A8D10)
#define CLASS_2_9DE16DBF558A149B_SET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0x146A8720)
#define CLASS_2_9DE16DBF558A149B__CTOR_OFFSET UNITYSDK_OFFSET(0x146A9240)

inline static constexpr unsigned int Class_2_9DE16DBF558A149B_TypeDefinitionIndex = 46981;

class Class_2_9DE16DBF558A149B : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPG::Client::MonoEmoPlayableGraph* Field_2_0; // 0x10
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_2_1; // 0x18
	::RPGTools::Timeline::Emotion::EmoTrackType _TrackType_k__BackingField; // 0x28

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
};
