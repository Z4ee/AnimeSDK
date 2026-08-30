#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0x1DD2E1F0)
#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD2E1A0)
#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETISUSESKILLONEMORE_OFFSET UNITYSDK_OFFSET(0x1DD2E2B0)
#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD2E150)
#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0x1DD2E230)
#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1DD2E270)
#define RPG_GAMECORE_LEVELTURNWAITACTIONORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2E130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnWaitActionOrder_TypeDefinitionIndex = 56883;

	class LevelTurnWaitActionOrder : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x10
		::RPG::GameCore::TurnState _TurnState; // 0x18
		::System::UInt32 _TurnCounter; // 0x1C
		::System::Boolean _IsUseSkillOneMore; // 0x20

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::RPG::GameCore::TurnState a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::RPG::GameCore::TurnState, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNWAITACTIONORDER__CTOR_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Boolean GetIsUseSkillOneMore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNWAITACTIONORDER_GETISUSESKILLONEMORE_OFFSET))(this);
		}
	};
}
