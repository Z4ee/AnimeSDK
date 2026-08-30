#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE686DE0)
#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE686E80)
#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE686E30)
#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_INIT_1_OFFSET UNITYSDK_OFFSET(0xE686D60)
#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE686CD0)
#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE686ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterBreakStateChange_TypeDefinitionIndex = 56979;

	class LevelCharacterBreakStateChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x18
		::RPG::GameCore::GameEntity* AttackerEntity; // 0x20
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0x28
		::System::Boolean IsRedStance; // 0x2C
		::System::Boolean IsBreak; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterBreakStateChange* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::RPG::GameCore::AttackDamageType a4, ::System::Boolean a5)
		{
			return ((::RPG::GameCore::LevelCharacterBreakStateChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::LevelCharacterBreakStateChange* Init_1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::GameCore::AttackDamageType a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::LevelCharacterBreakStateChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_INIT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
