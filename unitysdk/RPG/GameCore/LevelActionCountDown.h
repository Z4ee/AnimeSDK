#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELACTIONCOUNTDOWN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE67F630)
#define RPG_GAMECORE_LEVELACTIONCOUNTDOWN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE67F5E0)
#define RPG_GAMECORE_LEVELACTIONCOUNTDOWN_INIT_OFFSET UNITYSDK_OFFSET(0xE67F580)
#define RPG_GAMECORE_LEVELACTIONCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0xE67F680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelActionCountDown_TypeDefinitionIndex = 56996;

	class LevelActionCountDown : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* TriggerEntity; // 0x18
		::System::Int32 InitialCount; // 0x20
		::System::Int32 RemainingCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTDOWN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelActionCountDown* Init(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::LevelActionCountDown*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTDOWN_INIT_OFFSET))(this, a1, a2, a3);
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
