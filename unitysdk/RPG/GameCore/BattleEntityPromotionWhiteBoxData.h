#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEENTITYPROMOTIONWHITEBOXDATA_METHOD_2_285D300A878863CE_OFFSET UNITYSDK_OFFSET(0x186F3080)
#define RPG_GAMECORE_BATTLEENTITYPROMOTIONWHITEBOXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x186F3CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEntityPromotionWhiteBoxData_TypeDefinitionIndex = 21656;

	class BattleEntityPromotionWhiteBoxData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Promotion; // 0x10
		::RPG::GameCore::FixPoint AttackBase; // 0x18
		::RPG::GameCore::FixPoint AttackAdd; // 0x20
		::RPG::GameCore::FixPoint DefenceBase; // 0x28
		::RPG::GameCore::FixPoint DefenceAdd; // 0x30
		::RPG::GameCore::FixPoint HPBase; // 0x38
		::RPG::GameCore::FixPoint HPAdd; // 0x40
		::RPG::GameCore::FixPoint SpeedBase; // 0x48
		::RPG::GameCore::FixPoint SpeedAdd; // 0x50
		::RPG::GameCore::FixPoint RankAttackBase; // 0x58
		::RPG::GameCore::FixPoint RankAttackAdd; // 0x60
		::RPG::GameCore::FixPoint RankDefenceBase; // 0x68
		::RPG::GameCore::FixPoint RankDefenceAdd; // 0x70
		::RPG::GameCore::FixPoint RankHPBase; // 0x78
		::RPG::GameCore::FixPoint RankHPAdd; // 0x80
		::RPG::GameCore::FixPoint RankSpeedBase; // 0x88
		::RPG::GameCore::FixPoint RankSpeedAdd; // 0x90
		::RPG::GameCore::FixPoint CriticalChance; // 0x98
		::RPG::GameCore::FixPoint CriticalDamage; // 0xA0
		::RPG::GameCore::FixPoint RankCriticalChance; // 0xA8
		::RPG::GameCore::FixPoint RankCriticalDamage; // 0xB0
		::RPG::GameCore::FixPoint MinimumFatigueRatio; // 0xB8
		::RPG::GameCore::FixPoint BaseAggro; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYPROMOTIONWHITEBOXDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_285D300A878863CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEntityPromotionWhiteBoxData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEntityPromotionWhiteBoxData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYPROMOTIONWHITEBOXDATA_METHOD_2_285D300A878863CE_OFFSET))(a1, a2);
		}
	};
}
