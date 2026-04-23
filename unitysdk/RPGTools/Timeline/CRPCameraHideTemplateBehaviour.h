#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CRPCameraHideTemplateClip; }

#define RPGTOOLS_TIMELINE_CRPCAMERAHIDETEMPLATEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB89FD00)
#define RPGTOOLS_TIMELINE_CRPCAMERAHIDETEMPLATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB89FD20)
#define RPGTOOLS_TIMELINE_CRPCAMERAHIDETEMPLATEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB89FD10)
#define RPGTOOLS_TIMELINE_CRPCAMERAHIDETEMPLATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB89FE80)
#define RPGTOOLS_TIMELINE_CRPCAMERAHIDETEMPLATEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB89FE90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraHideTemplateBehaviour_TypeDefinitionIndex = 44645;

	class CRPCameraHideTemplateBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CRPCameraHideTemplateClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERAHIDETEMPLATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CRPCameraHideTemplateClip* get_Clip()
		{
			return ((::RPGTools::Timeline::CRPCameraHideTemplateClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERAHIDETEMPLATEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::CRPCameraHideTemplateClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CRPCameraHideTemplateClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERAHIDETEMPLATEBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERAHIDETEMPLATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERAHIDETEMPLATEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
