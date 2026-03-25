#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/PPFilterParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xAB8D880)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xAB8D980)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB8DA20)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB8DFB0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xAB8DFC0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xAB8DFD0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB8DFE0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int PPFilterTimelineBehaviourMixer_TypeDefinitionIndex = 39393;

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

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
