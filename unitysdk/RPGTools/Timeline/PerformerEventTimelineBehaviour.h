#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PerformerTimelineEventType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class TimelineEventArgument; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_METHOD_2_A15EF7939F75CCED_OFFSET UNITYSDK_OFFSET(0xAB7E510)
#define RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_METHOD_2_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0xAB7E580)
#define RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB7E3F0)
#define RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7E5D0)
#define RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB7E5E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformerEventTimelineBehaviour_TypeDefinitionIndex = 39264;

	class PerformerEventTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PerformerTimelineEventType Type; // 0x10
		::RPGTools::Timeline::TimelineEventArgument* Argument; // 0x18
		::System::Boolean _firstFrameHappened; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_A15EF7939F75CCED(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_METHOD_2_A15EF7939F75CCED_OFFSET))(this, a1);
		}

		::System::Void Method_2_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_METHOD_2_C433AF37CE9D6E5B_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
