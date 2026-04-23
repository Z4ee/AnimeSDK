#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/AdditionalColorGradingParameter.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::CustomRP { class RPGAdditionalColorGrading; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINEBEHAVIOUR_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB8F8B90)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8F8790)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F8C30)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8F8CB0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int AdditionalColorGradingTimelineBehaviour_TypeDefinitionIndex = 45241;

	class AdditionalColorGradingTimelineBehaviour : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGAdditionalColorGrading*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::AdditionalColorGradingParameter ColorGradingParameter; // 0x28
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINEBEHAVIOUR_METHOD_4_9681042564541CD6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
