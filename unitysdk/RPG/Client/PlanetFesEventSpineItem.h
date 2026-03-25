#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesEventSpineItemType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_PLANETFESEVENTSPINEITEM_ISFADEANIMPLAYING_OFFSET UNITYSDK_OFFSET(0x9F92F60)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWFADEIN_OFFSET UNITYSDK_OFFSET(0x9F93260)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWFADEOUT_OFFSET UNITYSDK_OFFSET(0x9F93620)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWRANDOMSPINEANIM_OFFSET UNITYSDK_OFFSET(0x9F92C50)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWSPINEANIM_OFFSET UNITYSDK_OFFSET(0x9F92EC0)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9F93820)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM__ISTIMELINEPLAYING_OFFSET UNITYSDK_OFFSET(0x9F931C0)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM__STOPALLTIMELINE_OFFSET UNITYSDK_OFFSET(0x9F93520)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesEventSpineItem_TypeDefinitionIndex = 54076;

	class PlanetFesEventSpineItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single _Epsilon; // 0x0
		::RPG::Client::PlanetFesEventSpineItemType ItemType; // 0x18
		::Spine::Unity::SkeletonGraphic* SpineTarget; // 0x20
		::System::Boolean SpineAnimLoop; // 0x28
		::System::Single FadeOutWaitTime; // 0x2C
		::UnityEngine::Animation* Animation; // 0x30
		::Il2CppArray<::System::String*>* FadeInAnimations; // 0x38
		::Il2CppArray<::System::String*>* FadeOutAnimations; // 0x40
		::Il2CppArray<::UnityEngine::Playables::PlayableDirector*>* FadeInDirectors; // 0x48
		::Il2CppArray<::UnityEngine::Playables::PlayableDirector*>* FadeOutDirectors; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM__CTOR_OFFSET))(this);
		}

		::System::Void ShowRandomSpineAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWRANDOMSPINEANIM_OFFSET))(this);
		}

		::System::Void ShowSpineAnim(::System::String* animName, ::System::Int32 trackIndex, ::System::Boolean loop)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWSPINEANIM_OFFSET))(this, animName, trackIndex, loop);
		}

		::System::Boolean IsFadeAnimPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM_ISFADEANIMPLAYING_OFFSET))(this);
		}

		::System::Void ShowFadeIn(::System::UInt32 targetIndex, ::System::Boolean fastforward)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWFADEIN_OFFSET))(this, targetIndex, fastforward);
		}

		::System::Void ShowFadeOut(::System::UInt32 targetIndex, ::System::Boolean fastforward)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWFADEOUT_OFFSET))(this, targetIndex, fastforward);
		}

		::System::Void _StopAllTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM__STOPALLTIMELINE_OFFSET))(this);
		}

		::System::Boolean _IsTimelinePlaying(::UnityEngine::Playables::PlayableDirector* timeline)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM__ISTIMELINEPLAYING_OFFSET))(this, timeline);
		}
	};
}
