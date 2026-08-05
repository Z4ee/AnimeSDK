#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/ClipType.h"
#include "unitysdk/UnityEngine/Timeline/MultiShowClip.h"

namespace MoleMole::Timeline { class ShotActiveBehaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_SHOTACTIVECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x173BBCE0)
#define MOLEMOLE_TIMELINE_SHOTACTIVECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x173BBC70)
#define MOLEMOLE_TIMELINE_SHOTACTIVECLIP_GET_CLIPTYPE_OFFSET UNITYSDK_OFFSET(0x173BBC80)
#define MOLEMOLE_TIMELINE_SHOTACTIVECLIP_METHOD_5_0043BC75B602D2E3_OFFSET UNITYSDK_OFFSET(0x173BBFA0)
#define MOLEMOLE_TIMELINE_SHOTACTIVECLIP_METHOD_5_8281A73B45B1EA1A_OFFSET UNITYSDK_OFFSET(0x173BBFF0)
#define MOLEMOLE_TIMELINE_SHOTACTIVECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x173BBF10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ShotActiveClip_TypeDefinitionIndex = 46774;

	class ShotActiveClip : public ::UnityEngine::Timeline::MultiShowClip
	{
	public:
		::MoleMole::Timeline::ShotActiveBehaviour* template_; // 0x18
		::UnityEngine::Timeline::TimelineClip* _clip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipType get_ClipType()
		{
			return ((::UnityEngine::Timeline::ClipType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVECLIP_GET_CLIPTYPE_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_0043BC75B602D2E3(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVECLIP_METHOD_5_0043BC75B602D2E3_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable Method_5_8281A73B45B1EA1A(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVECLIP_METHOD_5_8281A73B45B1EA1A_OFFSET))(this, a1, a2);
		}
	};
}
