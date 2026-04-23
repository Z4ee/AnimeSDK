#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELLOSEHP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DD8A0)
#define RPG_GAMECORE_LEVELLOSEHP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DD850)
#define RPG_GAMECORE_LEVELLOSEHP_INIT_OFFSET UNITYSDK_OFFSET(0xB6DD7E0)
#define RPG_GAMECORE_LEVELLOSEHP__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DD8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLoseHP_TypeDefinitionIndex = 52337;

	class LevelLoseHP : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Attacker; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x20
		::RPG::GameCore::FixPoint Damage; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHP__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelLoseHP* Init(::RPG::GameCore::GameEntity* pAttacker, ::RPG::GameCore::GameEntity* pTarget, ::RPG::GameCore::FixPoint fDamage)
		{
			return ((::RPG::GameCore::LevelLoseHP*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHP_INIT_OFFSET))(this, pAttacker, pTarget, fDamage);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHP_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHP_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
