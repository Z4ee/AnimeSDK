#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_125;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERREVIVE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18453420)
#define RPG_GAMECORE_LEVELCHARACTERREVIVE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x184533D0)
#define RPG_GAMECORE_LEVELCHARACTERREVIVE_GET_ISFROMDEATH_OFFSET UNITYSDK_OFFSET(0x18453470)
#define RPG_GAMECORE_LEVELCHARACTERREVIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18437450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterRevive_TypeDefinitionIndex = 56972;

	class LevelCharacterRevive : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::Class_1_43BD383C98B4C0C5_125* Param; // 0x18
		::RPG::GameCore::AliveState FromState; // 0x20

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2, ::Class_1_43BD383C98B4C0C5_125* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_125*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsFromDeath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVE_GET_ISFROMDEATH_OFFSET))(this);
		}
	};
}
