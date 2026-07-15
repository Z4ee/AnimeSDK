#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x199B48F0)
#define RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x199B48E0)
#define RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x199B4A80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShiftCameraLookAtClip_TypeDefinitionIndex = 46057;

	class ShiftCameraLookAtClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* LerpAnchor; // 0x20
		::System::String* StartAnchor; // 0x28
		::System::String* EndAnchor; // 0x30
		::System::Boolean UseCustomCurve; // 0x38
		::System::String* CurveName; // 0x40
		::UnityEngine::AnimationCurve* CustomCurve; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
