#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TimelineBindingType.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TRACKBINDINFO_METHOD_1_BC9384C781C3176A_OFFSET UNITYSDK_OFFSET(0x138940A0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TRACKBINDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x13894050)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int TrackBindInfo_TypeDefinitionIndex = 60317;

	class TrackBindInfo : public ::System::Object
	{
	public:
		::TimelineBindingType BindingType; // 0x10
		::System::String* relativePath; // 0x18
		::System::String* trackGuid; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TRACKBINDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_BC9384C781C3176A(::UnityEngine::Transform* a1, ::UnityEngine::Playables::PlayableDirector* a2, ::UnityEngine::Timeline::TimelineAsset* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TRACKBINDINFO_METHOD_1_BC9384C781C3176A_OFFSET))(this, a1, a2, a3);
		}
	};
}
