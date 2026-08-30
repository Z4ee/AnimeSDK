#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class MocapClip; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE86FEB0)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE870080)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE86FED0)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE870100)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE86FEC0)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE870190)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MocapBehaviour_TypeDefinitionIndex = 48649;

	class MocapBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::MocapClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::MocapClip* get_Clip()
		{
			return ((::RPGTools::Timeline::MocapClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::MocapClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::MocapClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
