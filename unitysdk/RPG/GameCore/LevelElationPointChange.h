#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELELATIONPOINTCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA987910)
#define RPG_GAMECORE_LEVELELATIONPOINTCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA9878C0)
#define RPG_GAMECORE_LEVELELATIONPOINTCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA987840)
#define RPG_GAMECORE_LEVELELATIONPOINTCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA987960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelElationPointChange_TypeDefinitionIndex = 45655;

	class LevelElationPointChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Source; // 0x18
		::RPG::GameCore::FixPoint OldValue; // 0x20
		::RPG::GameCore::FixPoint NewValue; // 0x28
		::RPG::GameCore::FixPoint ChangeValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELELATIONPOINTCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelElationPointChange* Init(::RPG::GameCore::FixPoint chgVal, ::RPG::GameCore::FixPoint oldVal, ::RPG::GameCore::FixPoint newVal, ::RPG::GameCore::GameEntity* source)
		{
			return ((::RPG::GameCore::LevelElationPointChange*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELELATIONPOINTCHANGE_INIT_OFFSET))(this, chgVal, oldVal, newVal, source);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELELATIONPOINTCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELELATIONPOINTCHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
