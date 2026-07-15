#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYTRIGGERLIMBO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1070A310)
#define RPG_GAMECORE_ABILITYTRIGGERLIMBO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1070A3A0)
#define RPG_GAMECORE_ABILITYTRIGGERLIMBO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1070A360)
#define RPG_GAMECORE_ABILITYTRIGGERLIMBO_INIT_OFFSET UNITYSDK_OFFSET(0x106DB5C0)
#define RPG_GAMECORE_ABILITYTRIGGERLIMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1070A3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityTriggerLimbo_TypeDefinitionIndex = 54038;

	class AbilityTriggerLimbo : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* TargetEntity; // 0x18
		::System::UInt32 _SourceEntityRuntimeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERLIMBO__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityTriggerLimbo* Init(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::AbilityTriggerLimbo*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERLIMBO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERLIMBO_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERLIMBO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERLIMBO_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
