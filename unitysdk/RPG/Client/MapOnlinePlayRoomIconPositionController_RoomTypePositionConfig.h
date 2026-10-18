#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_11.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER_ROOMTYPEPOSITIONCONFIG_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xD559FC0)
#define RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER_ROOMTYPEPOSITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD55A0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapOnlinePlayRoomIconPositionController_RoomTypePositionConfig_TypeDefinitionIndex = 72811;

	class MapOnlinePlayRoomIconPositionController_RoomTypePositionConfig : public ::System::Object
	{
	public:
		::Enum_3_0A3761FE34514D6C_11 RoomType; // 0x10
		::UnityEngine::Vector2 Position1P; // 0x14
		::UnityEngine::Vector2 Position2P; // 0x1C
		::UnityEngine::Vector2 Position3P; // 0x24
		::UnityEngine::Vector2 Position4P; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER_ROOMTYPEPOSITIONCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetPosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER_ROOMTYPEPOSITIONCONFIG_GETPOSITION_OFFSET))(this, a1);
		}
	};
}
