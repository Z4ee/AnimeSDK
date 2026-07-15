#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGDepthOfField; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTMIXER_GET_ISEDITORMODE_OFFSET UNITYSDK_OFFSET(0x1999F120)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1999F130)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1999F620)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFTimelineEffectMixer_TypeDefinitionIndex = 46776;

	class DOFTimelineEffectMixer : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGDepthOfField*>
	{
	public:
		::System::Single _lastWeight; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTMIXER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_IsEditorMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTMIXER_GET_ISEDITORMODE_OFFSET))();
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
