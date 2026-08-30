#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ABILITYBEFOREESCAPE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1684A5B0)
#define RPG_GAMECORE_ABILITYBEFOREESCAPE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1684A570)
#define RPG_GAMECORE_ABILITYBEFOREESCAPE_INIT_OFFSET UNITYSDK_OFFSET(0x1684A520)
#define RPG_GAMECORE_ABILITYBEFOREESCAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1684A600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityBeforeEscape_TypeDefinitionIndex = 56762;

	class AbilityBeforeEscape : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 _SourceEntityRuntimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREESCAPE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityBeforeEscape* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AbilityBeforeEscape*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREESCAPE_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREESCAPE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREESCAPE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
