#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELELATIONPOINTCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE690DB0)
#define RPG_GAMECORE_LEVELELATIONPOINTCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE690D60)
#define RPG_GAMECORE_LEVELELATIONPOINTCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE690CD0)
#define RPG_GAMECORE_LEVELELATIONPOINTCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE690E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelElationPointChange_TypeDefinitionIndex = 56937;

	class LevelElationPointChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Source; // 0x18
		::RPG::GameCore::TaskContext* Context; // 0x20
		::RPG::GameCore::FixPoint ChangeValue; // 0x28
		::RPG::GameCore::FixPoint NewValue; // 0x30
		::RPG::GameCore::FixPoint OldValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELELATIONPOINTCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelElationPointChange* Init(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::TaskContext* a5)
		{
			return ((::RPG::GameCore::LevelElationPointChange*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELELATIONPOINTCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
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
