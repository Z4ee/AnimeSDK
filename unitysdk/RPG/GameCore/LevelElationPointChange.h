#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELELATIONPOINTCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D58A0)
#define RPG_GAMECORE_LEVELELATIONPOINTCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D5850)
#define RPG_GAMECORE_LEVELELATIONPOINTCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB6D57C0)
#define RPG_GAMECORE_LEVELELATIONPOINTCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D58F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelElationPointChange_TypeDefinitionIndex = 52306;

	class LevelElationPointChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Source; // 0x18
		::RPG::GameCore::TaskContext* Context; // 0x20
		::RPG::GameCore::FixPoint OldValue; // 0x28
		::RPG::GameCore::FixPoint ChangeValue; // 0x30
		::RPG::GameCore::FixPoint NewValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELELATIONPOINTCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelElationPointChange* Init(::RPG::GameCore::FixPoint chgVal, ::RPG::GameCore::FixPoint oldVal, ::RPG::GameCore::FixPoint newVal, ::RPG::GameCore::GameEntity* source, ::RPG::GameCore::TaskContext* context)
		{
			return ((::RPG::GameCore::LevelElationPointChange*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELELATIONPOINTCHANGE_INIT_OFFSET))(this, chgVal, oldVal, newVal, source, context);
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
