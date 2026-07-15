#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLD_LEVELGROUPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5945C0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorld_LevelGroupAction_TypeDefinitionIndex = 40353;

	class TimelineControlGameWorld_LevelGroupAction : public ::System::Object
	{
	public:
		::System::String* UniqueName; // 0x10
		::UnityEngine::Animator* Animator; // 0x18
		::System::Int32 AnimatorTriggerParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLD_LEVELGROUPACTION__CTOR_OFFSET))(this);
		}
	};
}
