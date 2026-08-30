#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_HIDETALKRECORDINGDIALOGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8644A0)
#define RPGTOOLS_TIMELINE_HIDETALKRECORDINGDIALOGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE864490)
#define RPGTOOLS_TIMELINE_HIDETALKRECORDINGDIALOGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE864630)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideTalkRecordingDialogClip_TypeDefinitionIndex = 48745;

	class HideTalkRecordingDialogClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* UILuaPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDETALKRECORDINGDIALOGCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDETALKRECORDINGDIALOGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDETALKRECORDINGDIALOGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
