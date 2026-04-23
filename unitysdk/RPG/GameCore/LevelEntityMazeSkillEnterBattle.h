#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D6B10)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D6BB0)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D6B60)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_INIT_OFFSET UNITYSDK_OFFSET(0xB6D6AA0)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D6C00)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D6C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityMazeSkillEnterBattle_TypeDefinitionIndex = 52309;

	class LevelEntityMazeSkillEnterBattle : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x20
		::System::Boolean Precall; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityMazeSkillEnterBattle* Init(::RPG::GameCore::GameEntity* target, ::RPG::GameCore::TurnBasedModifierInstance* modifierInstance, ::System::Boolean precall)
		{
			return ((::RPG::GameCore::LevelEntityMazeSkillEnterBattle*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_INIT_OFFSET))(this, target, modifierInstance, precall);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
