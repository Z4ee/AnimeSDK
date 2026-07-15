#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELTURNPREPARESTART_CLEAR_OFFSET UNITYSDK_OFFSET(0x19782280)
#define RPG_GAMECORE_LEVELTURNPREPARESTART_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19782310)
#define RPG_GAMECORE_LEVELTURNPREPARESTART_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x197822C0)
#define RPG_GAMECORE_LEVELTURNPREPARESTART_INIT_OFFSET UNITYSDK_OFFSET(0x19782240)
#define RPG_GAMECORE_LEVELTURNPREPARESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x19782360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnPrepareStart_TypeDefinitionIndex = 54158;

	class LevelTurnPrepareStart : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnPrepareStart* Init()
		{
			return ((::RPG::GameCore::LevelTurnPrepareStart*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
