#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/TransitionParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGBlink; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOURMIXER_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB906CD0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB906E00)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOURMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xB9076D0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB9076F0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB907710)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int TransitionTimelineBehaviourMixer_TypeDefinitionIndex = 45338;

	class TransitionTimelineBehaviourMixer : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGBlink*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::TransitionParameter _TransitionParams; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOURMIXER__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOURMIXER_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
