#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class SetCharacterAnimExtLayerEnableClip; }
namespace RPGTools::Timeline { class SetCharacterAnimExtLayerEnableConfig; }

#define RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB911910)
#define RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB911930)
#define RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB911950)
#define RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB911920)
#define RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB911940)
#define RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB911B60)
#define RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB911B70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SetCharacterAnimExtLayerEnableBehaviour_TypeDefinitionIndex = 44689;

	class SetCharacterAnimExtLayerEnableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::SetCharacterAnimExtLayerEnableClip* _Clip_k__BackingField; // 0x10
		::RPGTools::Timeline::SetCharacterAnimExtLayerEnableConfig* _Config_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::SetCharacterAnimExtLayerEnableClip* get_Clip()
		{
			return ((::RPGTools::Timeline::SetCharacterAnimExtLayerEnableClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::SetCharacterAnimExtLayerEnableClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::SetCharacterAnimExtLayerEnableClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::RPGTools::Timeline::SetCharacterAnimExtLayerEnableConfig* get_Config()
		{
			return ((::RPGTools::Timeline::SetCharacterAnimExtLayerEnableConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::SetCharacterAnimExtLayerEnableConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::SetCharacterAnimExtLayerEnableConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
