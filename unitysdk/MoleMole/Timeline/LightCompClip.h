#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class LightCompBehaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define MOLEMOLE_TIMELINE_LIGHTCOMPCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x173BAD30)
#define MOLEMOLE_TIMELINE_LIGHTCOMPCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x173BAD20)
#define MOLEMOLE_TIMELINE_LIGHTCOMPCLIP_METHOD_4_687DEEB39C308466_OFFSET UNITYSDK_OFFSET(0x173BAF90)
#define MOLEMOLE_TIMELINE_LIGHTCOMPCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x173BAE80)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LightCompClip_TypeDefinitionIndex = 73741;

	class LightCompClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::LightCompBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_687DEEB39C308466(::UnityEngine::Light* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPCLIP_METHOD_4_687DEEB39C308466_OFFSET))(this, a1);
		}
	};
}
