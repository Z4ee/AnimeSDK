#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6C4C80)
#define RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6C4C30)
#define RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_GET_SCEPTER_OFFSET UNITYSDK_OFFSET(0xB6C4CD0)
#define RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_INIT_OFFSET UNITYSDK_OFFSET(0xB6C4BE0)
#define RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_SET_SCEPTER_OFFSET UNITYSDK_OFFSET(0xB6C4CE0)
#define RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C4CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAfterScepterTrigger_TypeDefinitionIndex = 52379;

	class LevelAfterScepterTrigger : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _Scepter_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelAfterScepterTrigger* Init(::RPG::GameCore::GameEntity* pScepter)
		{
			return ((::RPG::GameCore::LevelAfterScepterTrigger*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_INIT_OFFSET))(this, pScepter);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Scepter()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_GET_SCEPTER_OFFSET))(this);
		}

		::System::Void set_Scepter(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_SET_SCEPTER_OFFSET))(this, value);
		}
	};
}
