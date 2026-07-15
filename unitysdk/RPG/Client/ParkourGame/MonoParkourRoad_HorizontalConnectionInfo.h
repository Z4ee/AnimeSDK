#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourRoad_ConnectionInfo.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourRoad_HorizontalConnectionData.h"

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_HORIZONTALCONNECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2ECB70)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_HorizontalConnectionInfo_TypeDefinitionIndex = 70763;

	class MonoParkourRoad_HorizontalConnectionInfo : public ::RPG::Client::ParkourGame::MonoParkourRoad_ConnectionInfo
	{
	public:
		::System::Single LockSwitchDistance; // 0x10
		::Il2CppArray<::RPG::Client::ParkourGame::MonoParkourRoad_HorizontalConnectionData>* Data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_HORIZONTALCONNECTIONINFO__CTOR_OFFSET))(this);
		}
	};
}
