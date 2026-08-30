#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNBEGIN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD2C3D0)
#define RPG_GAMECORE_LEVELTURNBEGIN_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0x1DD2C4C0)
#define RPG_GAMECORE_LEVELTURNBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD2C470)
#define RPG_GAMECORE_LEVELTURNBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD2C420)
#define RPG_GAMECORE_LEVELTURNBEGIN_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0x1DD2C500)
#define RPG_GAMECORE_LEVELTURNBEGIN_INIT_OFFSET UNITYSDK_OFFSET(0x1DD2C370)
#define RPG_GAMECORE_LEVELTURNBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2C540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnBegin_TypeDefinitionIndex = 56878;

	class LevelTurnBegin : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x18
		::System::UInt32 _TurnCounter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnBegin* Init(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LevelTurnBegin*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_GETACTIVEENTITY_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_GETTURNCOUNTER_OFFSET))(this);
		}
	};
}
