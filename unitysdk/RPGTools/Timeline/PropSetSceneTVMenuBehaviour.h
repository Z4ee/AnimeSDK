#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class PropSetSceneTVMenuClip; }

#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB958A0)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0xAB95AD0)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0xAB95980)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB958C0)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB958B0)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB95BC0)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB95BD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PropSetSceneTVMenuBehaviour_TypeDefinitionIndex = 39093;

	class PropSetSceneTVMenuBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PropSetSceneTVMenuClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::PropSetSceneTVMenuClip* get_Clip()
		{
			return ((::RPGTools::Timeline::PropSetSceneTVMenuClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::PropSetSceneTVMenuClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::PropSetSceneTVMenuClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_DB67EEFB041425EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
		}

		::System::Void Method_2_4A41C63BFE58D26F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_METHOD_2_4A41C63BFE58D26F_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
