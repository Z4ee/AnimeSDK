#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline { class LightControlBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_LIGHTCONTROLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8E8500)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8E8760)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLCLIP_METHOD_4_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xB8E84B0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E8770)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LightControlClip_TypeDefinitionIndex = 45164;

	class LightControlClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::LightControlBehaviour* template_; // 0x18
		::System::Boolean AutoReset; // 0x20
		::UnityEngine::Vector3 position; // 0x24
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLCLIP__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLCLIP_METHOD_4_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
