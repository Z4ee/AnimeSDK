#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_SAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C286BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelCell_SaveConfig_TypeDefinitionIndex = 60542;

	class MonoTimelineControlGameLevelCell_SaveConfig : public ::System::Object
	{
	public:
		::System::Single radius; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_SAVECONFIG__CTOR_OFFSET))(this);
		}
	};
}
