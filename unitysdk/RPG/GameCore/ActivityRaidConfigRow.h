#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYRAIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA1B8C0)
#define RPG_GAMECORE_ACTIVITYRAIDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA1BEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidConfigRow_TypeDefinitionIndex = 14434;

	class ActivityRaidConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ActivityModuleID; // 0x10
		::System::UInt32 ActivityQuestID; // 0x14
		::System::UInt32 RaidID; // 0x18
		::System::UInt32 HardLevel; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityRaidConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRaidConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
