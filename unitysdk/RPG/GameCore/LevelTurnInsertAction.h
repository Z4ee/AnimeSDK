#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNINSERTACTION_CLEAR_OFFSET UNITYSDK_OFFSET(0xE69BA80)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE69BAD0)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE69BB20)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_GET_INSERTACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xE69BB70)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_INIT_OFFSET UNITYSDK_OFFSET(0xE69BA30)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_SET_INSERTACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xE69BB80)
#define RPG_GAMECORE_LEVELTURNINSERTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xE69BB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnInsertAction_TypeDefinitionIndex = 56891;

	class LevelTurnInsertAction : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* _InsertActionEntity_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnInsertAction* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelTurnInsertAction*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_InsertActionEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_GET_INSERTACTIONENTITY_OFFSET))(this);
		}

		::System::Void set_InsertActionEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_SET_INSERTACTIONENTITY_OFFSET))(this, a1);
		}
	};
}
