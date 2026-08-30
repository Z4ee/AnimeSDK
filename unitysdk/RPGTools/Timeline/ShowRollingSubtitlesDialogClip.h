#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B0C2A60)
#define RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B0C2A50)
#define RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0C2CE0)
#define RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C2C70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowRollingSubtitlesDialogClip_TypeDefinitionIndex = 48760;

	class ShowRollingSubtitlesDialogClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::String** StaticGet_UI_LUA_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShowRollingSubtitlesDialogClip_TypeDefinitionIndex)->GetStaticField(0x3F8E0);
		}
		static ::System::String** StaticGet_UI_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShowRollingSubtitlesDialogClip_TypeDefinitionIndex)->GetStaticField(0x3F8E8);
		}
		static ::RPG::Client::NotifyType* StaticGet_CLOSE_NOTIFY_TYPE()
		{
			return (::RPG::Client::NotifyType*)Il2CppClass::FromTypeDefinitionIndex(ShowRollingSubtitlesDialogClip_TypeDefinitionIndex)->GetStaticField(0xFB30);
		}
		::System::String* UILuaPath; // 0x18
		::System::String* ConfigPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP__CCTOR_OFFSET))();
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
