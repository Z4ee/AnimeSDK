#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELELATIONPOINTMAXCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD21D30)
#define RPG_GAMECORE_LEVELELATIONPOINTMAXCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD21CE0)
#define RPG_GAMECORE_LEVELELATIONPOINTMAXCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x1DD21C60)
#define RPG_GAMECORE_LEVELELATIONPOINTMAXCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD21D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelElationPointMaxChange_TypeDefinitionIndex = 56938;

	class LevelElationPointMaxChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Source; // 0x18
		::RPG::GameCore::FixPoint ChangeValue; // 0x20
		::RPG::GameCore::FixPoint NewValue; // 0x28
		::RPG::GameCore::FixPoint OldValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELELATIONPOINTMAXCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelElationPointMaxChange* Init(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::RPG::GameCore::LevelElationPointMaxChange*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELELATIONPOINTMAXCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELELATIONPOINTMAXCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELELATIONPOINTMAXCHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
