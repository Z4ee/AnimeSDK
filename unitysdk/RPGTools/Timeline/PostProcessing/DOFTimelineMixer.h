#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGDepthOfField; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB8B1E0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB8BBD0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB8BBF0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFTimelineMixer_TypeDefinitionIndex = 39373;

	class DOFTimelineMixer : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGDepthOfField*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEMIXER__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
