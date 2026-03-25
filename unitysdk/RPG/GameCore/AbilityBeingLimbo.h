#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ABILITYBEINGLIMBO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA7C6DA0)
#define RPG_GAMECORE_ABILITYBEINGLIMBO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA7C6D60)
#define RPG_GAMECORE_ABILITYBEINGLIMBO_INIT_OFFSET UNITYSDK_OFFSET(0xA7C6D10)
#define RPG_GAMECORE_ABILITYBEINGLIMBO__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C6DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityBeingLimbo_TypeDefinitionIndex = 45480;

	class AbilityBeingLimbo : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::UInt32 _SourceEntityRuntimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGLIMBO__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityBeingLimbo* Init(::System::UInt32 nSourceRuntimeID)
		{
			return ((::RPG::GameCore::AbilityBeingLimbo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGLIMBO_INIT_OFFSET))(this, nSourceRuntimeID);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGLIMBO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGLIMBO_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
