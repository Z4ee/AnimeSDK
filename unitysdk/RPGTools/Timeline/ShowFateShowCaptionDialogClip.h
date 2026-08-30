#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SHOWFATESHOWCAPTIONDIALOGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8E3F10)
#define RPGTOOLS_TIMELINE_SHOWFATESHOWCAPTIONDIALOGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8E3F00)
#define RPGTOOLS_TIMELINE_SHOWFATESHOWCAPTIONDIALOGCLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8E4150)
#define RPGTOOLS_TIMELINE_SHOWFATESHOWCAPTIONDIALOGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8E40E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowFateShowCaptionDialogClip_TypeDefinitionIndex = 48754;

	class ShowFateShowCaptionDialogClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::String** StaticGet_UI_LUA_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShowFateShowCaptionDialogClip_TypeDefinitionIndex)->GetStaticField(0x3D2F0);
		}
		static ::System::String** StaticGet_UI_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShowFateShowCaptionDialogClip_TypeDefinitionIndex)->GetStaticField(0x3D2F8);
		}
		::System::String* UILuaPath; // 0x18
		::System::String* UIParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWFATESHOWCAPTIONDIALOGCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWFATESHOWCAPTIONDIALOGCLIP__CCTOR_OFFSET))();
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWFATESHOWCAPTIONDIALOGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWFATESHOWCAPTIONDIALOGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
