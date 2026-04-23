#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELGAMEMODEEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D8CA0)
#define RPG_GAMECORE_LEVELGAMEMODEEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D8C50)
#define RPG_GAMECORE_LEVELGAMEMODEEND_INIT_OFFSET UNITYSDK_OFFSET(0xB6D8C10)
#define RPG_GAMECORE_LEVELGAMEMODEEND__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D8CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGameModeEnd_TypeDefinitionIndex = 52247;

	class LevelGameModeEnd : public ::Class_1_9988289E7F8AA214
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
