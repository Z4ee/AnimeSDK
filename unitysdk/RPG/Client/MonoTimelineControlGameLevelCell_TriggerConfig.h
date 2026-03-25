#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_TRIGGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9D3D3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelCell_TriggerConfig_TypeDefinitionIndex = 48937;

	class MonoTimelineControlGameLevelCell_TriggerConfig : public ::System::Object
	{
	public:
		::System::Single radius; // 0x10
		::System::Single protectTime; // 0x14
		::System::String* attachGroup; // 0x18
		::System::String* attachTrigger; // 0x20
		::System::Boolean repeated; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_TRIGGERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
