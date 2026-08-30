#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELTURNENDEXIT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD2C6C0)
#define RPG_GAMECORE_LEVELTURNENDEXIT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD2C700)
#define RPG_GAMECORE_LEVELTURNENDEXIT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD2C750)
#define RPG_GAMECORE_LEVELTURNENDEXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2C7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnEndExit_TypeDefinitionIndex = 56890;

	class LevelTurnEndExit : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
