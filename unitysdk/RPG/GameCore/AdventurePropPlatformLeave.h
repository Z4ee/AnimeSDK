#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5909D0)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB590AA0)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB590A50)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_INIT_OFFSET UNITYSDK_OFFSET(0xB590970)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE__CTOR_OFFSET UNITYSDK_OFFSET(0xB590AF0)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB590B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePropPlatformLeave_TypeDefinitionIndex = 52198;

	class AdventurePropPlatformLeave : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* LeaveSourceEntity; // 0x18
		::RPG::GameCore::GameEntity* ColliderEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePropPlatformLeave* Init(::RPG::GameCore::GameEntity* colliderEntity, ::RPG::GameCore::GameEntity* stepOnSource)
		{
			return ((::RPG::GameCore::AdventurePropPlatformLeave*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_INIT_OFFSET))(this, colliderEntity, stepOnSource);
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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
