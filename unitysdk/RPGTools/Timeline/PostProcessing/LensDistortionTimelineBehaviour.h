#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/LensDistortionParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGLensDistortion; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB8C300)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB8C6D0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB8C750)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int LensDistortionTimelineBehaviour_TypeDefinitionIndex = 39380;

	class LensDistortionTimelineBehaviour : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGLensDistortion*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::LensDistortionParameter LensDistortionParameter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
