#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_DRINKMAKERTIMELINECONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A68C290)
#define RPG_CLIENT_DRINKMAKERTIMELINECONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x1A68B610)
#define RPG_CLIENT_DRINKMAKERTIMELINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A68C310)
#define RPG_CLIENT_DRINKMAKERTIMELINECONTROLLER__INITRANDOMSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1A68B6B0)
#define RPG_CLIENT_DRINKMAKERTIMELINECONTROLLER__STARTONRANDOMCLIP_OFFSET UNITYSDK_OFFSET(0x1A68C180)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerTimelineController_TypeDefinitionIndex = 72682;

	class DrinkMakerTimelineController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* RandomStartTrackName; // 0x18
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x20
		::System::Collections::Generic::List_1<::System::Double>* _StartTimes; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTIMELINECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTIMELINECONTROLLER_PLAY_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTIMELINECONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void _InitRandomStartTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTIMELINECONTROLLER__INITRANDOMSTARTTIME_OFFSET))(this);
		}

		::System::Void _StartOnRandomClip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTIMELINECONTROLLER__STARTONRANDOMCLIP_OFFSET))(this);
		}
	};
}
