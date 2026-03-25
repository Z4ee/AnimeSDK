#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/ChromaticAberrationParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGChromaticAberration; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB87950)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB87AD0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB87B10)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ChromaticAberrationTimelineBehaviour_TypeDefinitionIndex = 39357;

	class ChromaticAberrationTimelineBehaviour : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGChromaticAberration*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::ChromaticAberrationParameter ChromaticAberrationParameter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
