#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVETEAMSLOTUPGRADECOSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B009640)
#define RPG_GAMECORE_IDLELIVETEAMSLOTUPGRADECOSTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0097C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTeamSlotUpgradeCostRow_TypeDefinitionIndex = 11273;

	class IdleLiveTeamSlotUpgradeCostRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint LevelAddPower; // 0x10
		::System::UInt32 Level; // 0x18
		::System::UInt32 Cost; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTUPGRADECOSTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTUPGRADECOSTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
