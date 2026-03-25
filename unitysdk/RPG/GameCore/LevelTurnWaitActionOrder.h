#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xA994220)
#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA9941D0)
#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA994180)
#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xA994260)
#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETTURNSTATE_OFFSET UNITYSDK_OFFSET(0xA9942A0)
#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA994170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnWaitActionOrder_TypeDefinitionIndex = 45602;

	class LevelTurnWaitActionOrder : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x10
		::System::UInt32 _TurnCounter; // 0x18
		::RPG::GameCore::TurnState _TurnState; // 0x1C

		::System::Void _ctor(::RPG::GameCore::GameEntity* ActiveEntity, ::System::UInt32 TurnCounter, ::RPG::GameCore::TurnState eTurnState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNWAITACTIONORDER__CTOR_OFFSET))(this, ActiveEntity, TurnCounter, eTurnState);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETACTIVEENTITY_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETTURNCOUNTER_OFFSET))(this);
		}

		::RPG::GameCore::TurnState GetTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETTURNSTATE_OFFSET))(this);
		}
	};
}
