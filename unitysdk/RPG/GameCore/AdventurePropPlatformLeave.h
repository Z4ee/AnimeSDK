#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_CLEAR_OFFSET UNITYSDK_OFFSET(0x15414540)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x15414610)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x154145C0)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_INIT_OFFSET UNITYSDK_OFFSET(0x154144E0)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x15414660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePropPlatformLeave_TypeDefinitionIndex = 54107;

	class AdventurePropPlatformLeave : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* ColliderEntity; // 0x18
		::RPG::GameCore::GameEntity* LeaveSourceEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePropPlatformLeave* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::AdventurePropPlatformLeave*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
