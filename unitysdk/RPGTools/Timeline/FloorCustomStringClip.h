#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class FCVSimulationParam; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B58C430)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B58C420)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGCLIP_METHOD_4_067D4BA23D87C002_OFFSET UNITYSDK_OFFSET(0x1B58C230)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGCLIP_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1B58C5C0)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B58C620)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FloorCustomStringClip_TypeDefinitionIndex = 48588;

	class FloorCustomStringClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* Name; // 0x18
		::System::String* Value; // 0x20
		::System::Boolean RecoverWhenUnLock; // 0x28
		::RPGTools::Timeline::FCVSimulationParam* Param; // 0x30
		::System::String* FCVSimulationValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGCLIP_METHOD_4_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_4_067D4BA23D87C002(::RPGTools::Timeline::FloorCustomStringClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::FloorCustomStringClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGCLIP_METHOD_4_067D4BA23D87C002_OFFSET))(this, a1);
		}
	};
}
