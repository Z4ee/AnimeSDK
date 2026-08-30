#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLESCORESOLDIERCONFIG_METHOD_2_02A4002F7EFD4AFC_OFFSET UNITYSDK_OFFSET(0x1CFAA670)
#define RPG_GAMECORE_CHENLINGBATTLESCORESOLDIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFAC920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleScoreSoldierConfig_TypeDefinitionIndex = 15516;

	class ChenLingBattleScoreSoldierConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Ratio1; // 0x10
		::RPG::GameCore::FixPoint Ratio2; // 0x18
		::System::UInt32 AtkRatio; // 0x20
		::System::UInt32 HpRatio; // 0x24
		::System::UInt32 AtkSpdRatio; // 0x28
		::System::UInt32 CrtRatio; // 0x2C
		::System::UInt32 CrtDmgkRatio; // 0x30
		::System::UInt32 NumRatio; // 0x34
		::System::UInt32 EnchantRatio; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLESCORESOLDIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_02A4002F7EFD4AFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleScoreSoldierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleScoreSoldierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLESCORESOLDIERCONFIG_METHOD_2_02A4002F7EFD4AFC_OFFSET))(a1, a2);
		}
	};
}
