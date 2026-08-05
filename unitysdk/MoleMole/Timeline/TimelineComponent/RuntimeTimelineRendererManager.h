#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Timeline::TimelineComponent { class RuntimeTimelineRebindComp; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18DED220)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18DED0D0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x18DECCF0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_SET_OFFSET UNITYSDK_OFFSET(0x18DEC910)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18DED260)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineRendererManager_TypeDefinitionIndex = 85625;

	class RuntimeTimelineRendererManager : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* _playableDirector; // 0x58
		::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp* _runtimeTimelineRebindComp; // 0x60
		::System::Boolean SetCutsceneMode; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Set()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_SET_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_ONDISABLE_OFFSET))(this);
		}
	};
}
