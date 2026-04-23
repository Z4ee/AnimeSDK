#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVETEAMSLOTUPGRADECOSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A17010)
#define RPG_GAMECORE_IDLELIVETEAMSLOTUPGRADECOSTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A17190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTeamSlotUpgradeCostRow_TypeDefinitionIndex = 11125;

	class IdleLiveTeamSlotUpgradeCostRow : public ::System::Object
	{
	public:
		::System::UInt32 Cost; // 0x10
		::System::UInt32 Level; // 0x14
		::RPG::GameCore::FixPoint LevelAddPower; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTUPGRADECOSTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTUPGRADECOSTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
