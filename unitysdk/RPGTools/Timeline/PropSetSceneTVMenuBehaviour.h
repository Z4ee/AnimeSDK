#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class PropSetSceneTVMenuClip; }

#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B0B8000)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_METHOD_2_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x1B0B8230)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x1B0B80E0)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B0B8020)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B0B8010)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B8340)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PropSetSceneTVMenuBehaviour_TypeDefinitionIndex = 48713;

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

		::System::Void set_Clip(::RPGTools::Timeline::PropSetSceneTVMenuClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::PropSetSceneTVMenuClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_DB67EEFB041425EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
		}

		::System::Void Method_2_B6BB704B01BCC35B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUBEHAVIOUR_METHOD_2_B6BB704B01BCC35B_OFFSET))(this);
		}
	};
}
