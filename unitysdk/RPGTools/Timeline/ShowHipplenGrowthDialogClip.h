#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SHOWHIPPLENGROWTHDIALOGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x199B5920)
#define RPGTOOLS_TIMELINE_SHOWHIPPLENGROWTHDIALOGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x199B5910)
#define RPGTOOLS_TIMELINE_SHOWHIPPLENGROWTHDIALOGCLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x199B5B50)
#define RPGTOOLS_TIMELINE_SHOWHIPPLENGROWTHDIALOGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x199B5AE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowHipplenGrowthDialogClip_TypeDefinitionIndex = 46514;

	class ShowHipplenGrowthDialogClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::String** StaticGet_UI_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShowHipplenGrowthDialogClip_TypeDefinitionIndex)->GetStaticField(0x6B710);
		}
		static ::System::String** StaticGet_UI_LUA_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShowHipplenGrowthDialogClip_TypeDefinitionIndex)->GetStaticField(0x6B718);
		}
		::System::String* UILuaPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWHIPPLENGROWTHDIALOGCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWHIPPLENGROWTHDIALOGCLIP__CCTOR_OFFSET))();
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWHIPPLENGROWTHDIALOGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWHIPPLENGROWTHDIALOGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
