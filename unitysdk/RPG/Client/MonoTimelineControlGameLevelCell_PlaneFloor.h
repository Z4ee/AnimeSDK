#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoTimelineControlGameLevelCell_FloorConfig.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_PLANEFLOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9D3D3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelCell_PlaneFloor_TypeDefinitionIndex = 48934;

	class MonoTimelineControlGameLevelCell_PlaneFloor : public ::RPG::Client::MonoTimelineControlGameLevelCell_FloorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_PLANEFLOOR__CTOR_OFFSET))(this);
		}
	};
}
