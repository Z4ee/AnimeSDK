#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/RaindropParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGLensGlitch; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINEBEHAVIOURMIXER_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xAB8F7C0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB8F940)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINEBEHAVIOURMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB900A0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xAB900C0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB900E0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int RaindropTimelineBehaviourMixer_TypeDefinitionIndex = 39408;

	class RaindropTimelineBehaviourMixer : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGLensGlitch*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::RaindropParameter _RaindropParams; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINEBEHAVIOURMIXER__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINEBEHAVIOURMIXER_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
