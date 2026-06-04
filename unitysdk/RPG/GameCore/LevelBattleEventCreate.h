#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELBATTLEEVENTCREATE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE391B0)
#define RPG_GAMECORE_LEVELBATTLEEVENTCREATE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE39160)
#define RPG_GAMECORE_LEVELBATTLEEVENTCREATE_INIT_OFFSET UNITYSDK_OFFSET(0xCE39100)
#define RPG_GAMECORE_LEVELBATTLEEVENTCREATE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE39200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBattleEventCreate_TypeDefinitionIndex = 53016;

	class LevelBattleEventCreate : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Caster; // 0x18
		::RPG::GameCore::GameEntity* BattleEventEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTCREATE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBattleEventCreate* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::LevelBattleEventCreate*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTCREATE_INIT_OFFSET))(this, a1, a2);
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
