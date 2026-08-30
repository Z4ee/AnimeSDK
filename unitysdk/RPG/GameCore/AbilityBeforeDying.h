#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ABILITYBEFOREDYING_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1684A4C0)
#define RPG_GAMECORE_ABILITYBEFOREDYING_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1684A480)
#define RPG_GAMECORE_ABILITYBEFOREDYING_INIT_OFFSET UNITYSDK_OFFSET(0x1684A430)
#define RPG_GAMECORE_ABILITYBEFOREDYING__CTOR_OFFSET UNITYSDK_OFFSET(0x1684A510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityBeforeDying_TypeDefinitionIndex = 56761;

	class AbilityBeforeDying : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 _SourceEntityRuntimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREDYING__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityBeforeDying* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AbilityBeforeDying*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREDYING_INIT_OFFSET))(this, a1);
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
