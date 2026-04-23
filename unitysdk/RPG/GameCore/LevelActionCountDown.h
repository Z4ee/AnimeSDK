#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELACTIONCOUNTDOWN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6C4730)
#define RPG_GAMECORE_LEVELACTIONCOUNTDOWN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6C46E0)
#define RPG_GAMECORE_LEVELACTIONCOUNTDOWN_INIT_OFFSET UNITYSDK_OFFSET(0xB6C4680)
#define RPG_GAMECORE_LEVELACTIONCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C4780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelActionCountDown_TypeDefinitionIndex = 52364;

	class LevelActionCountDown : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* TriggerEntity; // 0x18
		::System::Int32 InitialCount; // 0x20
		::System::Int32 RemainingCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTDOWN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelActionCountDown* Init(::RPG::GameCore::GameEntity* triggerEntity, ::System::Int32 initialCount, ::System::Int32 remainingCount)
		{
			return ((::RPG::GameCore::LevelActionCountDown*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTDOWN_INIT_OFFSET))(this, triggerEntity, initialCount, remainingCount);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTDOWN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTDOWN_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
