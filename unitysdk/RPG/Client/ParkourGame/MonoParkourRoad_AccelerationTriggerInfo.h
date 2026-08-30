#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourRoad_TriggerInfo.h"

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ACCELERATIONTRIGGERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDA2F8F0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_AccelerationTriggerInfo_TypeDefinitionIndex = 74060;

	class MonoParkourRoad_AccelerationTriggerInfo : public ::RPG::Client::ParkourGame::MonoParkourRoad_TriggerInfo
	{
	public:
		::System::Int32 Priority; // 0x10
		::System::Int32 AddEngineValue; // 0x14
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ACCELERATIONTRIGGERINFO__CTOR_OFFSET))(this);
		}
	};
}
