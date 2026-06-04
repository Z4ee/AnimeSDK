#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BlinkParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGBlink; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKTIMELINEBEHAVIOURMIXER_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xD03C030)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKTIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD03C160)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKTIMELINEBEHAVIOURMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xD03C910)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xD03C930)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD03C950)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BlinkTimelineBehaviourMixer_TypeDefinitionIndex = 45812;

	class BlinkTimelineBehaviourMixer : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGBlink*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::BlinkParameter _BlinkParams; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKTIMELINEBEHAVIOURMIXER__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKTIMELINEBEHAVIOURMIXER_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKTIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
