#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class VirtualCameraNoiseClip; }

#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xD0722E0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD072300)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xD0722F0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD072580)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD072590)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VirtualCameraNoiseBehaviour_TypeDefinitionIndex = 45145;

	class VirtualCameraNoiseBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::VirtualCameraNoiseClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::VirtualCameraNoiseClip* get_Clip()
		{
			return ((::RPGTools::Timeline::VirtualCameraNoiseClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::VirtualCameraNoiseClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VirtualCameraNoiseClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
