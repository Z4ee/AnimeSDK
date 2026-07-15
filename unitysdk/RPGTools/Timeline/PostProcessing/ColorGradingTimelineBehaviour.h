#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/ColorGradingParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::CustomRP { class RPGColorGrading; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINEBEHAVIOUR_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1999BEF0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1999B000)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1999BF90)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ColorGradingTimelineBehaviour_TypeDefinitionIndex = 46766;

	class ColorGradingTimelineBehaviour : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGColorGrading*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::ColorGradingParameter ColorGradingParameter; // 0x28
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINEBEHAVIOUR_METHOD_4_9681042564541CD6_OFFSET))(this);
		}
	};
}
