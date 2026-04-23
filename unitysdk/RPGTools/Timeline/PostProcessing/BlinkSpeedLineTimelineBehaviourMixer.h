#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BlinkSpeedLineParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGBlink; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOURMIXER_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB8F9250)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8F93B0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOURMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F9ED0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB8F9EF0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8F9F10)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BlinkSpeedLineTimelineBehaviourMixer_TypeDefinitionIndex = 45250;

	class BlinkSpeedLineTimelineBehaviourMixer : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGBlink*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::BlinkSpeedLineParameter _BlinkSpeedLineParams; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOURMIXER__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOURMIXER_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
