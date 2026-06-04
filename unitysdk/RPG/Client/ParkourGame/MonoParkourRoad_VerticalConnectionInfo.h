#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourRoad_ConnectionInfo.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourRoad_VerticalConnectionData.h"

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_VERTICALCONNECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC33B080)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_VerticalConnectionInfo_TypeDefinitionIndex = 69243;

	class MonoParkourRoad_VerticalConnectionInfo : public ::RPG::Client::ParkourGame::MonoParkourRoad_ConnectionInfo
	{
	public:
		::Il2CppArray<::RPG::Client::ParkourGame::MonoParkourRoad_VerticalConnectionData>* Data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_VERTICALCONNECTIONINFO__CTOR_OFFSET))(this);
		}
	};
}
