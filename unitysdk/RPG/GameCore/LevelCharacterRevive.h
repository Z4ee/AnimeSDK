#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_117;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERREVIVE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDF1470)
#define RPG_GAMECORE_LEVELCHARACTERREVIVE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDF1420)
#define RPG_GAMECORE_LEVELCHARACTERREVIVE_GET_ISFROMDEATH_OFFSET UNITYSDK_OFFSET(0x1BDF14C0)
#define RPG_GAMECORE_LEVELCHARACTERREVIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF1410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterRevive_TypeDefinitionIndex = 54251;

	class LevelCharacterRevive : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::Class_1_43BD383C98B4C0C5_117* Param; // 0x18
		::RPG::GameCore::AliveState FromState; // 0x20

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2, ::Class_1_43BD383C98B4C0C5_117* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_117*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVE__CTOR_OFFSET))(this, a1, a2, a3);
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
