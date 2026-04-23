#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleComboConfig; }

#define RPG_GAMECORE_RTDAMAGECONSTCONFIG_METHOD_2_20DF1D782C684035_OFFSET UNITYSDK_OFFSET(0x18DC4840)
#define RPG_GAMECORE_RTDAMAGECONSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCD5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDamageConstConfig_TypeDefinitionIndex = 16747;

	class RtDamageConstConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint DamageTakenRatioMax; // 0x10
		::System::Int32 MaxMonsterLevel; // 0x18
		::RPG::GameCore::FixPoint DamageRandomMin; // 0x20
		::RPG::GameCore::FixPoint DamageRandomMax; // 0x28
		::RPG::GameCore::FixPoint DefenceAdd; // 0x30
		::RPG::GameCore::FixPoint DefenceMultipe; // 0x38
		::RPG::GameCore::FixPoint AllDamageReduceMax; // 0x40
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x48
		::RPG::GameCore::FixPoint OverallResistanceMin; // 0x50
		::RPG::GameCore::FixPoint OverallResistanceMax; // 0x58
		::RPG::GameCore::FixPoint MinimumStanceLevelEffect; // 0x60
		::System::Int32 ElationPointMax; // 0x68
		::RPG::GameCore::BattleComboConfig* ComboConstConfig; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDAMAGECONSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_20DF1D782C684035(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDamageConstConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDamageConstConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDAMAGECONSTCONFIG_METHOD_2_20DF1D782C684035_OFFSET))(a1, a2);
		}
	};
}
