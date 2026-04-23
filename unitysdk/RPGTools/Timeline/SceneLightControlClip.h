#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class SceneLightControlBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB910450)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB910620)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLCLIP_METHOD_4_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xB910400)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB910630)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SceneLightControlClip_TypeDefinitionIndex = 44904;

	class SceneLightControlClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::SceneLightControlBehaviour* template_; // 0x18
		::System::Boolean AutoReset; // 0x20
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLCLIP__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLCLIP_METHOD_4_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
