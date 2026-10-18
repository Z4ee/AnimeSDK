#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_11.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapOnlinePlayRoomIconPositionController_RoomTypePositionConfig; }

#define RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER___C__DISPLAYCLASS1_0__APPLYROOMTYPEPOSITIONS_B__0_OFFSET UNITYSDK_OFFSET(0xD551310)
#define RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD550FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapOnlinePlayRoomIconPositionController___c__DisplayClass1_0_TypeDefinitionIndex = 72811;

	class MapOnlinePlayRoomIconPositionController___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Enum_3_0A3761FE34514D6C_11 roomType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ApplyRoomTypePositions_b__0(::RPG::Client::MapOnlinePlayRoomIconPositionController_RoomTypePositionConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapOnlinePlayRoomIconPositionController_RoomTypePositionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER___C__DISPLAYCLASS1_0__APPLYROOMTYPEPOSITIONS_B__0_OFFSET))(this, a1);
		}
	};
}
