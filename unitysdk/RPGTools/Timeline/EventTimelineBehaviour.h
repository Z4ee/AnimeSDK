#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/TimelineEventType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class TimelineEventArgument; }

#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_METHOD_2_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0xB8DAEC0)
#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_METHOD_2_FFBC3E5986CAC663_OFFSET UNITYSDK_OFFSET(0xB8DB0B0)
#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8DAE10)
#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8DB2D0)
#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8DB2E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EventTimelineBehaviour_TypeDefinitionIndex = 45148;

	class EventTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::TimelineEventType Type; // 0x10
		::RPGTools::Timeline::TimelineEventArgument* Arguments; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_6D71CC7A9DF62322()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_METHOD_2_6D71CC7A9DF62322_OFFSET))(this);
		}

		::System::Void Method_2_FFBC3E5986CAC663()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_METHOD_2_FFBC3E5986CAC663_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
