#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"

#define RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98ACF0)
#define RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98ACA0)
#define RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_INIT_OFFSET UNITYSDK_OFFSET(0xA98AC50)
#define RPG_GAMECORE_LEVELGAMEMODESTATECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0xA98AD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGameModeStateChanged_TypeDefinitionIndex = 45593;

	class LevelGameModeStateChanged : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameModeState CurrentGameModeState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODESTATECHANGED__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelGameModeStateChanged* Init(::RPG::GameCore::GameModeState eNewGameModeState)
		{
			return ((::RPG::GameCore::LevelGameModeStateChanged*(*)(::PVOID, ::RPG::GameCore::GameModeState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_INIT_OFFSET))(this, eNewGameModeState);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
