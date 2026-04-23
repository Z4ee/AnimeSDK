#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ABILITYBEFOREDYING_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB509B00)
#define RPG_GAMECORE_ABILITYBEFOREDYING_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB509AC0)
#define RPG_GAMECORE_ABILITYBEFOREDYING_INIT_OFFSET UNITYSDK_OFFSET(0xB509A70)
#define RPG_GAMECORE_ABILITYBEFOREDYING__CTOR_OFFSET UNITYSDK_OFFSET(0xB509B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityBeforeDying_TypeDefinitionIndex = 52131;

	class AbilityBeforeDying : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::UInt32 _SourceEntityRuntimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREDYING__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityBeforeDying* Init(::System::UInt32 nSourceRuntimeID)
		{
			return ((::RPG::GameCore::AbilityBeforeDying*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREDYING_INIT_OFFSET))(this, nSourceRuntimeID);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREDYING_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREDYING_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
