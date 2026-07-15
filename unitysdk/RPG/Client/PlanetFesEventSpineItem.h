#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesEventSpineItemType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_PLANETFESEVENTSPINEITEM_ISFADEANIMPLAYING_OFFSET UNITYSDK_OFFSET(0x1A969540)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWFADEIN_OFFSET UNITYSDK_OFFSET(0x1A969810)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWFADEOUT_OFFSET UNITYSDK_OFFSET(0x1A969BF0)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWRANDOMSPINEANIM_OFFSET UNITYSDK_OFFSET(0x1A9691F0)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWSPINEANIM_OFFSET UNITYSDK_OFFSET(0x1A9694A0)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A969E40)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM__ISTIMELINEPLAYING_OFFSET UNITYSDK_OFFSET(0x1A969770)
#define RPG_CLIENT_PLANETFESEVENTSPINEITEM__STOPALLTIMELINE_OFFSET UNITYSDK_OFFSET(0x1A969B10)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesEventSpineItem_TypeDefinitionIndex = 63529;

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

		::System::Void ShowSpineAnim(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWSPINEANIM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsFadeAnimPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM_ISFADEANIMPLAYING_OFFSET))(this);
		}

		::System::Void ShowFadeIn(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWFADEIN_OFFSET))(this, a1, a2);
		}

		::System::Void ShowFadeOut(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM_SHOWFADEOUT_OFFSET))(this, a1, a2);
		}

		::System::Void _StopAllTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM__STOPALLTIMELINE_OFFSET))(this);
		}

		::System::Boolean _IsTimelinePlaying(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESEVENTSPINEITEM__ISTIMELINEPLAYING_OFFSET))(this, a1);
		}
	};
}
