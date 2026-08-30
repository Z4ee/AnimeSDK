#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

#define RPG_GAMECORE_LEVELTURNSTATECHANGED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD2D250)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD2D2A0)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1DD2D310)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_GET_ISUSESKILLONEMORE_OFFSET UNITYSDK_OFFSET(0x1DD2D330)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_GET_PREVTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1DD2D2F0)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_INIT_OFFSET UNITYSDK_OFFSET(0x1DD2D1F0)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1DD2D320)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_SET_ISUSESKILLONEMORE_OFFSET UNITYSDK_OFFSET(0x1DD2D340)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_SET_PREVTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1DD2D300)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2D350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnStateChanged_TypeDefinitionIndex = 56875;

	class LevelTurnStateChanged : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::TurnState _PrevTurnState_k__BackingField; // 0x18
		::RPG::GameCore::TurnState _CurrentTurnState_k__BackingField; // 0x1C
		::System::Boolean _IsUseSkillOneMore_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnStateChanged* Init(::RPG::GameCore::TurnState a1, ::RPG::GameCore::TurnState a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::LevelTurnStateChanged*(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::TurnState, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_INIT_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::TurnState get_PrevTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_GET_PREVTURNSTATE_OFFSET))(this);
		}

		::System::Void set_PrevTurnState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_SET_PREVTURNSTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnState get_CurrentTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_GET_CURRENTTURNSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentTurnState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_SET_CURRENTTURNSTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUseSkillOneMore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_GET_ISUSESKILLONEMORE_OFFSET))(this);
		}

		::System::Void set_IsUseSkillOneMore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_SET_ISUSESKILLONEMORE_OFFSET))(this, a1);
		}
	};
}
