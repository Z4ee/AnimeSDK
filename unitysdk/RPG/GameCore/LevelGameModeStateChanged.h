#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"

#define RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE46CE0)
#define RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE46C90)
#define RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_INIT_OFFSET UNITYSDK_OFFSET(0xCE46C40)
#define RPG_GAMECORE_LEVELGAMEMODESTATECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0xCE46D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGameModeStateChanged_TypeDefinitionIndex = 52940;

	class LevelGameModeStateChanged : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameModeState CurrentGameModeState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODESTATECHANGED__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelGameModeStateChanged* Init(::RPG::GameCore::GameModeState a1)
		{
			return ((::RPG::GameCore::LevelGameModeStateChanged*(*)(::PVOID, ::RPG::GameCore::GameModeState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_INIT_OFFSET))(this, a1);
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
