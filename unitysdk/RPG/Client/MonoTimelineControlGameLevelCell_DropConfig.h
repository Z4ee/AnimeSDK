#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A354900)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelCell_DropConfig_TypeDefinitionIndex = 57722;

	class MonoTimelineControlGameLevelCell_DropConfig : public ::System::Object
	{
	public:
		::System::Single radius; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DROPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
