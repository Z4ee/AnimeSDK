#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EQUIPMENTGROWUPBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x961F6E0)
#define RPG_CLIENT_EQUIPMENTGROWUPBEFOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x961F760)

namespace RPG::Client
{
	inline static constexpr unsigned int EquipmentGrowUpBeforeData_TypeDefinitionIndex = 53345;

	class EquipmentGrowUpBeforeData : public ::System::Object
	{
	public:
		::System::UInt32 ExpBefore; // 0x10
		::System::UInt32 PropomtionBefore; // 0x14
		::System::UInt32 LevelBefore; // 0x18
		::RPG::GameCore::FixPoint AttackBefore; // 0x20
		::System::UInt32 RankBefore; // 0x28
		::System::UInt32 MaxLevelBefore; // 0x2C
		::RPG::GameCore::FixPoint HpMaxBefore; // 0x30
		::RPG::GameCore::FixPoint DefenseBefore; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTGROWUPBEFOREDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::EquipmentGrowUpBeforeData* beforeData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTGROWUPBEFOREDATA_COPYTO_OFFSET))(this, beforeData);
		}
	};
}
