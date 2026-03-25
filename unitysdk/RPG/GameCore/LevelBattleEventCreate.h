#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELBATTLEEVENTCREATE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97CD00)
#define RPG_GAMECORE_LEVELBATTLEEVENTCREATE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97CCB0)
#define RPG_GAMECORE_LEVELBATTLEEVENTCREATE_INIT_OFFSET UNITYSDK_OFFSET(0xA97CC50)
#define RPG_GAMECORE_LEVELBATTLEEVENTCREATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA97CD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBattleEventCreate_TypeDefinitionIndex = 45667;

	class LevelBattleEventCreate : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* BattleEventEntity; // 0x18
		::RPG::GameCore::GameEntity* Caster; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTCREATE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBattleEventCreate* Init(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::GameEntity* pCasterEntity)
		{
			return ((::RPG::GameCore::LevelBattleEventCreate*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTCREATE_INIT_OFFSET))(this, pEntity, pCasterEntity);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTCREATE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTCREATE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
