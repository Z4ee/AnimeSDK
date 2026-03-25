#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNINSERTACTION_CLEAR_OFFSET UNITYSDK_OFFSET(0xA9928D0)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA992920)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA992970)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_GET_INSERTACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xA9929C0)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_INIT_OFFSET UNITYSDK_OFFSET(0xA992880)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_SET_INSERTACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xA9929D0)
#define RPG_GAMECORE_LEVELTURNINSERTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA9929E0)
#define RPG_GAMECORE_LEVELTURNINSERTACTION___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA9929F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnInsertAction_TypeDefinitionIndex = 45610;

	class LevelTurnInsertAction : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _InsertActionEntity_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnInsertAction* Init(::RPG::GameCore::GameEntity* pInsertActionEntity)
		{
			return ((::RPG::GameCore::LevelTurnInsertAction*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_INIT_OFFSET))(this, pInsertActionEntity);
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

		::System::Void set_InsertActionEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_SET_INSERTACTIONENTITY_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
