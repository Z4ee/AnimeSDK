#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYTRIGGERLIMBO_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5558F0)
#define RPG_GAMECORE_ABILITYTRIGGERLIMBO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB555980)
#define RPG_GAMECORE_ABILITYTRIGGERLIMBO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB555940)
#define RPG_GAMECORE_ABILITYTRIGGERLIMBO_INIT_OFFSET UNITYSDK_OFFSET(0xB522380)
#define RPG_GAMECORE_ABILITYTRIGGERLIMBO__CTOR_OFFSET UNITYSDK_OFFSET(0xB5559D0)
#define RPG_GAMECORE_ABILITYTRIGGERLIMBO___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5559E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityTriggerLimbo_TypeDefinitionIndex = 52129;

	class AbilityTriggerLimbo : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* TargetEntity; // 0x18
		::System::UInt32 _SourceEntityRuntimeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERLIMBO__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityTriggerLimbo* Init(::System::UInt32 nSourceRuntimeID, ::RPG::GameCore::GameEntity* pTarget)
		{
			return ((::RPG::GameCore::AbilityTriggerLimbo*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERLIMBO_INIT_OFFSET))(this, nSourceRuntimeID, pTarget);
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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERLIMBO___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
