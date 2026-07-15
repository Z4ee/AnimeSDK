#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNINSERTACTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x19781AA0)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19781AF0)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x19781B40)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_GET_INSERTACTIONENTITY_OFFSET UNITYSDK_OFFSET(0x19781B90)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_INIT_OFFSET UNITYSDK_OFFSET(0x19781A50)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_SET_INSERTACTIONENTITY_OFFSET UNITYSDK_OFFSET(0x19781BA0)
#define RPG_GAMECORE_LEVELTURNINSERTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19781BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnInsertAction_TypeDefinitionIndex = 54170;

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
