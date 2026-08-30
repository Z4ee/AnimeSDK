#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/PPFilterParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE8D0B90)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE8D0990)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE8D0A90)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8D0C20)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xE8D1430)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int PPFilterTimelineBehaviourMixer_TypeDefinitionIndex = 49044;

	class PPFilterTimelineBehaviourMixer : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PostProcessing::PPFilterParameter _PPFilterParameter; // 0x20
		::RPG::Client::EnvironmentSystem* envSystem; // 0x38
		::System::Boolean isOverlayed; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
