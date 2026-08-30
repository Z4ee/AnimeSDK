#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELGAMEMODEEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE693BA0)
#define RPG_GAMECORE_LEVELGAMEMODEEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE693B50)
#define RPG_GAMECORE_LEVELGAMEMODEEND_INIT_OFFSET UNITYSDK_OFFSET(0xE693B10)
#define RPG_GAMECORE_LEVELGAMEMODEEND__CTOR_OFFSET UNITYSDK_OFFSET(0xE693BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGameModeEnd_TypeDefinitionIndex = 56877;

	class LevelGameModeEnd : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEEND__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelGameModeEnd* Init()
		{
			return ((::RPG::GameCore::LevelGameModeEnd*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEEND_INIT_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEEND_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEEND_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
