#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA84C250)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA84C320)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA84C2D0)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_INIT_OFFSET UNITYSDK_OFFSET(0xA84C1F0)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA84C370)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA84C380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePropPlatformEnter_TypeDefinitionIndex = 45547;

	class AdventurePropPlatformEnter : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* StepOnSourceEntity; // 0x18
		::RPG::GameCore::GameEntity* ColliderEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePropPlatformEnter* Init(::RPG::GameCore::GameEntity* colliderEntity, ::RPG::GameCore::GameEntity* stepOnSource)
		{
			return ((::RPG::GameCore::AdventurePropPlatformEnter*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_INIT_OFFSET))(this, colliderEntity, stepOnSource);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
