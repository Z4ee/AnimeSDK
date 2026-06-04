#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CharacterTimeSlowBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFF8C20)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xCFF8C10)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFF8DD0)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF8D90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterTimeSlowClip_TypeDefinitionIndex = 45326;

	class CharacterTimeSlowClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::String** StaticGet_CharacterTimeScaleKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CharacterTimeSlowClip_TypeDefinitionIndex)->GetStaticField(0x7DB0);
		}
		::System::String* CharacterUniqueName; // 0x18
		::RPGTools::Timeline::CharacterTimeSlowBehaviour* template_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP__CCTOR_OFFSET))();
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
