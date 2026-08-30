#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SHOWTALKRECORDINGDIALOGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8E51D0)
#define RPGTOOLS_TIMELINE_SHOWTALKRECORDINGDIALOGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8E51C0)
#define RPGTOOLS_TIMELINE_SHOWTALKRECORDINGDIALOGCLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8E53A0)
#define RPGTOOLS_TIMELINE_SHOWTALKRECORDINGDIALOGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8E5360)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowTalkRecordingDialogClip_TypeDefinitionIndex = 48762;

	class ShowTalkRecordingDialogClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::String** StaticGet_UI_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShowTalkRecordingDialogClip_TypeDefinitionIndex)->GetStaticField(0x35140);
		}
		static ::System::String** StaticGet_UI_LUA_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShowTalkRecordingDialogClip_TypeDefinitionIndex)->GetStaticField(0x35148);
		}
		static ::RPG::Client::NotifyType* StaticGet_CLOSE_NOTIFY_TYPE()
		{
			return (::RPG::Client::NotifyType*)Il2CppClass::FromTypeDefinitionIndex(ShowTalkRecordingDialogClip_TypeDefinitionIndex)->GetStaticField(0xDE60);
		}
		::System::String* UILuaPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWTALKRECORDINGDIALOGCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWTALKRECORDINGDIALOGCLIP__CCTOR_OFFSET))();
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWTALKRECORDINGDIALOGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWTALKRECORDINGDIALOGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
