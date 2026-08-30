#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELGAMEMODEBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD24910)
#define RPG_GAMECORE_LEVELGAMEMODEBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD248C0)
#define RPG_GAMECORE_LEVELGAMEMODEBEGIN_INIT_OFFSET UNITYSDK_OFFSET(0x1DD24880)
#define RPG_GAMECORE_LEVELGAMEMODEBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD24960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGameModeBegin_TypeDefinitionIndex = 56876;

	class LevelGameModeBegin : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEBEGIN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelGameModeBegin* Init()
		{
			return ((::RPG::GameCore::LevelGameModeBegin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEBEGIN_INIT_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEBEGIN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEBEGIN_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
