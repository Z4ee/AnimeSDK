#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18451DB0)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18451E00)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x18451E70)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GET_PREVTURNSTATE_OFFSET UNITYSDK_OFFSET(0x18451E50)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x18451D50)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x18451E80)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_SET_PREVTURNSTATE_OFFSET UNITYSDK_OFFSET(0x18451E60)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18451E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBeforeTurnStateChange_TypeDefinitionIndex = 56874;

	class LevelBeforeTurnStateChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::TurnState _PrevTurnState_k__BackingField; // 0x18
		::RPG::GameCore::TurnState _CurrentTurnState_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBeforeTurnStateChange* Init(::RPG::GameCore::TurnState a1, ::RPG::GameCore::TurnState a2)
		{
			return ((::RPG::GameCore::LevelBeforeTurnStateChange*(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_INIT_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::TurnState get_PrevTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GET_PREVTURNSTATE_OFFSET))(this);
		}

		::System::Void set_PrevTurnState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_SET_PREVTURNSTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnState get_CurrentTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GET_CURRENTTURNSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentTurnState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_SET_CURRENTTURNSTATE_OFFSET))(this, a1);
		}
	};
}
