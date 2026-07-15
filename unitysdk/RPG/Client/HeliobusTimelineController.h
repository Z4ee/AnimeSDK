#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPG_CLIENT_HELIOBUSTIMELINECONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1794CC60)
#define RPG_CLIENT_HELIOBUSTIMELINECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1794D4E0)
#define RPG_CLIENT_HELIOBUSTIMELINECONTROLLER_PAUSETIMELINE_OFFSET UNITYSDK_OFFSET(0x1794CBA0)
#define RPG_CLIENT_HELIOBUSTIMELINECONTROLLER_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x1794CC00)
#define RPG_CLIENT_HELIOBUSTIMELINECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1794CED0)
#define RPG_CLIENT_HELIOBUSTIMELINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1794DA70)
#define RPG_CLIENT_HELIOBUSTIMELINECONTROLLER__ONSCREENSIZECHANGE_OFFSET UNITYSDK_OFFSET(0x1794DA20)
#define RPG_CLIENT_HELIOBUSTIMELINECONTROLLER__SETTIMELINEANIMTRACK_OFFSET UNITYSDK_OFFSET(0x1794D700)
#define RPG_CLIENT_HELIOBUSTIMELINECONTROLLER__SETTIMELINECAMERATRACK_OFFSET UNITYSDK_OFFSET(0x1794D5A0)
#define RPG_CLIENT_HELIOBUSTIMELINECONTROLLER__SETTIMELINETRACK_OFFSET UNITYSDK_OFFSET(0x1794CFA0)
#define RPG_CLIENT_HELIOBUSTIMELINECONTROLLER__TRYMUTETRACK_OFFSET UNITYSDK_OFFSET(0x1794D8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusTimelineController_TypeDefinitionIndex = 69497;

	class HeliobusTimelineController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _NodeHuohuoWithTail; // 0x18
		::UnityEngine::Transform* _NodeHuohuoWithoutTail; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* _MutedTracks; // 0x28
		::System::Single _Ratio4To3; // 0x30
		::System::Single _Ratio16To9; // 0x34
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x38
		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* _Tracks; // 0x40
		::System::UInt32 _SubMissionID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSTIMELINECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void PauseTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSTIMELINECONTROLLER_PAUSETIMELINE_OFFSET))(this);
		}

		::System::Void PlayTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSTIMELINECONTROLLER_PLAYTIMELINE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSTIMELINECONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSTIMELINECONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSTIMELINECONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void _SetTimelineTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSTIMELINECONTROLLER__SETTIMELINETRACK_OFFSET))(this);
		}

		::System::Void _SetTimelineCameraTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSTIMELINECONTROLLER__SETTIMELINECAMERATRACK_OFFSET))(this);
		}

		::System::Void _SetTimelineAnimTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSTIMELINECONTROLLER__SETTIMELINEANIMTRACK_OFFSET))(this);
		}

		::System::Void _TryMuteTrack(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSTIMELINECONTROLLER__TRYMUTETRACK_OFFSET))(this, a1);
		}

		::System::Void _OnScreenSizeChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSTIMELINECONTROLLER__ONSCREENSIZECHANGE_OFFSET))(this, a1);
		}
	};
}
