#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/ToneMappingParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGTonemapping; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x199A7B70)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x199A80B0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ToneMappingTimelineBehaviour_TypeDefinitionIndex = 46829;

	class ToneMappingTimelineBehaviour : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGTonemapping*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::ToneMappingParameter ToneMappingParameter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
