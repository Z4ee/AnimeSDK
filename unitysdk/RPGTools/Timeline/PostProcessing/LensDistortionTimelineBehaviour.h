#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/LensDistortionParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGLensDistortion; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1B0AD7F0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B0AD660)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B0AD5A0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1B0AD870)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B0ACE30)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0AD920)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int LensDistortionTimelineBehaviour_TypeDefinitionIndex = 49031;

	class LensDistortionTimelineBehaviour : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGLensDistortion*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::LensDistortionParameter LensDistortionParameter; // 0x28
		::System::Boolean _FlipNotified; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_4_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_METHOD_4_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
