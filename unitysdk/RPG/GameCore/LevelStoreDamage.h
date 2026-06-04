#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_1_C3FD3943CDE7D4EA;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELSTOREDAMAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE4DBE0)
#define RPG_GAMECORE_LEVELSTOREDAMAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE4DB90)
#define RPG_GAMECORE_LEVELSTOREDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4DB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelStoreDamage_TypeDefinitionIndex = 52987;

	class LevelStoreDamage : public ::System::Object
	{
	public:
		::Class_1_C3FD3943CDE7D4EA* StoreData; // 0x10
		::RPG::GameCore::GameEntity* Target; // 0x18

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_C3FD3943CDE7D4EA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_C3FD3943CDE7D4EA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTOREDAMAGE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTOREDAMAGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTOREDAMAGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
