#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::BattlePerform { class BPCameraConfig; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB899490)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB899480)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_GET_END_OFFSET UNITYSDK_OFFSET(0xB899460)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_GET_START_OFFSET UNITYSDK_OFFSET(0xB899440)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_SET_END_OFFSET UNITYSDK_OFFSET(0xB899470)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_SET_START_OFFSET UNITYSDK_OFFSET(0xB899450)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB899660)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCameraClip_TypeDefinitionIndex = 45476;

	class BPCameraClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::BattlePerform::BPCameraConfig* Config; // 0x18
		::System::Double _Start_k__BackingField; // 0x20
		::System::Double _End_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP__CTOR_OFFSET))(this);
		}

		::System::Double get_Start()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_SET_START_OFFSET))(this, value);
		}

		::System::Double get_End()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_SET_END_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
