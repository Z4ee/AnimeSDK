#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::Client { class EmoEyeCtrl; }
namespace RPGTools::Timeline { class EmoEyeCtrlOffsetData; }
namespace RPGTools::Timeline { class EmoEyeCtrlShakeData; }
namespace RPGTools::Timeline { class EmoEyeCtrlTimelineBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B573590)
#define RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINECLIP_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B573560)
#define RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B573580)
#define RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINECLIP_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B573570)
#define RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B573710)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoEyeCtrlTimelineClip_TypeDefinitionIndex = 48572;

	class EmoEyeCtrlTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* _CharacterUniqueName_k__BackingField; // 0x18
		::RPGTools::Timeline::EmoEyeCtrlOffsetData* emoEyeCtrlOffsetData; // 0x20
		::RPGTools::Timeline::EmoEyeCtrlShakeData* ShakeData; // 0x28
		::System::Single Duration; // 0x30
		::System::Single Start; // 0x34
		::System::Single End; // 0x38
		::RPG::Client::EmoEyeCtrl* EyeCtrl; // 0x40
		::RPGTools::Timeline::EmoEyeCtrlTimelineBehaviour* template_; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINECLIP_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINECLIP_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
