#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class LiveStreamSmallWindowClip; }

#define RPGTOOLS_TIMELINE_LIVESTREAMSMALLWINDOWBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xD02BC20)
#define RPGTOOLS_TIMELINE_LIVESTREAMSMALLWINDOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD02BC40)
#define RPGTOOLS_TIMELINE_LIVESTREAMSMALLWINDOWBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xD02BC30)
#define RPGTOOLS_TIMELINE_LIVESTREAMSMALLWINDOWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD02BD10)
#define RPGTOOLS_TIMELINE_LIVESTREAMSMALLWINDOWBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD02BD20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LiveStreamSmallWindowBehaviour_TypeDefinitionIndex = 45467;

	class LiveStreamSmallWindowBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::LiveStreamSmallWindowClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMSMALLWINDOWBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::LiveStreamSmallWindowClip* get_Clip()
		{
			return ((::RPGTools::Timeline::LiveStreamSmallWindowClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMSMALLWINDOWBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::LiveStreamSmallWindowClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::LiveStreamSmallWindowClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMSMALLWINDOWBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMSMALLWINDOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMSMALLWINDOWBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
