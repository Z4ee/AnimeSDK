#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97E410)
#define RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97E4B0)
#define RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97E460)
#define RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0xA97E3B0)
#define RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xA97E500)
#define RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97E510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterEnterRedStance_TypeDefinitionIndex = 45697;

	class LevelCharacterEnterRedStance : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x18
		::RPG::GameCore::GameEntity* AttackerEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterEnterRedStance* Init(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::GameEntity* pAttackerEntity)
		{
			return ((::RPG::GameCore::LevelCharacterEnterRedStance*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_INIT_OFFSET))(this, pEntity, pAttackerEntity);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
