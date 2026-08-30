#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/SpeedLineParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGSpeedLine; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_SPEEDLINETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8D4C40)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_SPEEDLINETIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8D57E0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int SpeedLineTimelineBehaviour_TypeDefinitionIndex = 49070;

	class SpeedLineTimelineBehaviour : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGSpeedLine*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::SpeedLineParameter SpeedLineParameter; // 0x28
		::System::Boolean texChanged; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_SPEEDLINETIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_SPEEDLINETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
