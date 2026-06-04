#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EQUIPMENTGROWUPBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0xB92D590)
#define RPG_CLIENT_EQUIPMENTGROWUPBEFOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB92D610)

namespace RPG::Client
{
	inline static constexpr unsigned int EquipmentGrowUpBeforeData_TypeDefinitionIndex = 61413;

	class EquipmentGrowUpBeforeData : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint DefenseBefore; // 0x10
		::System::UInt32 LevelBefore; // 0x18
		::System::UInt32 ExpBefore; // 0x1C
		::System::UInt32 PropomtionBefore; // 0x20
		::System::UInt32 RankBefore; // 0x24
		::RPG::GameCore::FixPoint AttackBefore; // 0x28
		::RPG::GameCore::FixPoint HpMaxBefore; // 0x30
		::System::UInt32 MaxLevelBefore; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTGROWUPBEFOREDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::EquipmentGrowUpBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTGROWUPBEFOREDATA_COPYTO_OFFSET))(this, a1);
		}
	};
}
