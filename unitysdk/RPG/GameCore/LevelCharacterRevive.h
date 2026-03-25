#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_102;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERREVIVE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97EEC0)
#define RPG_GAMECORE_LEVELCHARACTERREVIVE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97EE70)
#define RPG_GAMECORE_LEVELCHARACTERREVIVE_GET_ISFROMDEATH_OFFSET UNITYSDK_OFFSET(0xA97EF10)
#define RPG_GAMECORE_LEVELCHARACTERREVIVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA965CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterRevive_TypeDefinitionIndex = 45689;

	class LevelCharacterRevive : public ::System::Object
	{
	public:
		::Class_1_43BD383C98B4C0C5_102* Param; // 0x10
		::RPG::GameCore::GameEntity* Entity; // 0x18
		::RPG::GameCore::AliveState FromState; // 0x20

		::System::Void _ctor(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::AliveState fromState, ::Class_1_43BD383C98B4C0C5_102* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_102*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVE__CTOR_OFFSET))(this, pEntity, fromState, param);
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
