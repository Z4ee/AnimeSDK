#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CRPCameraSplitScreenTemplateClip; }

#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D136C90)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1D136CB0)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D136CA0)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D136F10)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSplitScreenTemplateBehaviour_TypeDefinitionIndex = 48372;

	class CRPCameraSplitScreenTemplateBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CRPCameraSplitScreenTemplateClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CRPCameraSplitScreenTemplateClip* get_Clip()
		{
			return ((::RPGTools::Timeline::CRPCameraSplitScreenTemplateClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::CRPCameraSplitScreenTemplateClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CRPCameraSplitScreenTemplateClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
