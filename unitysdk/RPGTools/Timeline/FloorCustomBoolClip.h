#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class FCVSimulationParam; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD01F720)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xD01F710)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD01F8B0)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_METHOD_4_7859EEE32925E270_OFFSET UNITYSDK_OFFSET(0xD01F550)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD01F910)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FloorCustomBoolClip_TypeDefinitionIndex = 45420;

	class FloorCustomBoolClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* Name; // 0x18
		::System::Boolean Value; // 0x20
		::System::Boolean RecoverWhenUnLock; // 0x21
		::RPGTools::Timeline::FCVSimulationParam* Param; // 0x28
		::System::String* FCVSimulationValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_METHOD_4_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_4_7859EEE32925E270(::RPGTools::Timeline::FloorCustomBoolClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::FloorCustomBoolClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_METHOD_4_7859EEE32925E270_OFFSET))(this, a1);
		}
	};
}
