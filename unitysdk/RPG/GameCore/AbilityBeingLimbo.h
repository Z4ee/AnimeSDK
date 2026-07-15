#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ABILITYBEINGLIMBO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x106C3890)
#define RPG_GAMECORE_ABILITYBEINGLIMBO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x106C3850)
#define RPG_GAMECORE_ABILITYBEINGLIMBO_INIT_OFFSET UNITYSDK_OFFSET(0x106C3800)
#define RPG_GAMECORE_ABILITYBEINGLIMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x106C38E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityBeingLimbo_TypeDefinitionIndex = 54039;

	class AbilityBeingLimbo : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 _SourceEntityRuntimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGLIMBO__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityBeingLimbo* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AbilityBeingLimbo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGLIMBO_INIT_OFFSET))(this, a1);
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
