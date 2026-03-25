#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNBEGIN_CLEAR_OFFSET UNITYSDK_OFFSET(0xA9923C0)
#define RPG_GAMECORE_LEVELTURNBEGIN_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xA9924B0)
#define RPG_GAMECORE_LEVELTURNBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA992460)
#define RPG_GAMECORE_LEVELTURNBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA992410)
#define RPG_GAMECORE_LEVELTURNBEGIN_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xA9924F0)
#define RPG_GAMECORE_LEVELTURNBEGIN_INIT_OFFSET UNITYSDK_OFFSET(0xA992360)
#define RPG_GAMECORE_LEVELTURNBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA992530)
#define RPG_GAMECORE_LEVELTURNBEGIN___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA992540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnBegin_TypeDefinitionIndex = 45598;

	class LevelTurnBegin : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x18
		::System::UInt32 _TurnCounter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnBegin* Init(::RPG::GameCore::GameEntity* ActiveEntity, ::System::UInt32 TurnCounter)
		{
			return ((::RPG::GameCore::LevelTurnBegin*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_INIT_OFFSET))(this, ActiveEntity, TurnCounter);
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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
