#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BloomAnimateParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class AllBloomStage; }
namespace RPG::CustomRP { class RPGBloom; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8FB440)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FB800)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8FB8F0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BloomAnimateTimelineBehaviour_TypeDefinitionIndex = 45259;

	class BloomAnimateTimelineBehaviour : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGBloom*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::BloomAnimateParameter BloomParameter; // 0x28
		::RPG::CustomRP::AllBloomStage* _AllBloomStage; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
