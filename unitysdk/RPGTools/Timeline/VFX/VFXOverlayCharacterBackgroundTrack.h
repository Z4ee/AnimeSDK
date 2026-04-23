#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB92B080)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xB92B180)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK_GET_GENDERTYPE_OFFSET UNITYSDK_OFFSET(0xB92B2A0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xB92AFC0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB92B2B0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB92B3A0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xB92B3E0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xB92B390)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXOverlayCharacterBackgroundTrack_TypeDefinitionIndex = 45380;

	class VFXOverlayCharacterBackgroundTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		// static const ::System::String* EFFECT_PATH; // 0x0
		::RPG::GameCore::GenderType _genderType; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GenderType get_GenderType()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK_GET_GENDERTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, P0);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::UnityEngine::Timeline::TimelineClip* P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::System::Int32 P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, P0, P1, P2);
		}
	};
}
