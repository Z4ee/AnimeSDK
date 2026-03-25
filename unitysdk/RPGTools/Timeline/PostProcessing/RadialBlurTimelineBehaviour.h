#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/DirectionBlurParameter.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/RadialBlurParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGRadialBlur; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB8EF30)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB8EFB0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB8F320)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB8F360)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB8F370)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int RadialBlurTimelineBehaviour_TypeDefinitionIndex = 39403;

	class RadialBlurTimelineBehaviour : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGRadialBlur*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::RadialBlurParameter RadialBlurParameter; // 0x28
		::RPGTools::Timeline::PostProcessing::DirectionBlurParameter DirectionBlurParameter; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
