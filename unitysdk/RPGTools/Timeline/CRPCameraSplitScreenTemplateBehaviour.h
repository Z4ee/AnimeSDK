#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CRPCameraSplitScreenTemplateClip; }

#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8A4220)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8A4240)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8A4230)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A4490)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8A44A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSplitScreenTemplateBehaviour_TypeDefinitionIndex = 44667;

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

		::System::Void set_Clip(::RPGTools::Timeline::CRPCameraSplitScreenTemplateClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CRPCameraSplitScreenTemplateClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
