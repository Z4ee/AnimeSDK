#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class AnchorInfo; }
namespace RPGTools::Timeline { class AtmosphereCenterClip; }

#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB20F30)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_METHOD_2_341399EEE94286E7_OFFSET UNITYSDK_OFFSET(0xAB21250)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_METHOD_2_A5EAA5E1A08BAC94_OFFSET UNITYSDK_OFFSET(0xAB21040)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB20F50)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB20F40)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB21560)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB21570)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AtmosphereCenterBehaviour_TypeDefinitionIndex = 38719;

	class AtmosphereCenterBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::AtmosphereCenterClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::AtmosphereCenterClip* get_Clip()
		{
			return ((::RPGTools::Timeline::AtmosphereCenterClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::AtmosphereCenterClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::AtmosphereCenterClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_A5EAA5E1A08BAC94(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_METHOD_2_A5EAA5E1A08BAC94_OFFSET))(this, a1);
		}

		::System::Void Method_2_341399EEE94286E7(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_METHOD_2_341399EEE94286E7_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
