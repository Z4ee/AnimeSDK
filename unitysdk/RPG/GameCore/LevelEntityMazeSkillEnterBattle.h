#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD22C40)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD22CE0)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD22C90)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_INIT_OFFSET UNITYSDK_OFFSET(0x1DD22BD0)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD22D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityMazeSkillEnterBattle_TypeDefinitionIndex = 56940;

	class LevelEntityMazeSkillEnterBattle : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x20
		::System::Boolean Precall; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityMazeSkillEnterBattle* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::LevelEntityMazeSkillEnterBattle*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_INIT_OFFSET))(this, a1, a2, a3);
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
	};
}
