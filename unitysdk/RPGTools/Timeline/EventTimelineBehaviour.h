#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/TimelineEventType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class TimelineEventArgument; }

#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_METHOD_2_44D54B0829C8FEF6_OFFSET UNITYSDK_OFFSET(0xD01E190)
#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_METHOD_2_FFBC3E5986CAC663_OFFSET UNITYSDK_OFFSET(0xD01E3C0)
#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD01E0E0)
#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD01E5E0)
#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD01E5F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EventTimelineBehaviour_TypeDefinitionIndex = 45696;

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

		::System::Void Method_2_44D54B0829C8FEF6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_METHOD_2_44D54B0829C8FEF6_OFFSET))(this);
		}

		::System::Void Method_2_FFBC3E5986CAC663()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_METHOD_2_FFBC3E5986CAC663_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
