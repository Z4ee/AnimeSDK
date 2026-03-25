#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingBattlePresetEnhancementConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEPRESETARMYCONFIG_METHOD_2_E38E352B7C47A557_OFFSET UNITYSDK_OFFSET(0x170806C0)
#define RPG_GAMECORE_CHENLINGBATTLEPRESETARMYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17080AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePresetArmyConfig_TypeDefinitionIndex = 14383;

	class ChenLingBattlePresetArmyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SoldierID; // 0x10
		::System::UInt32 Level; // 0x14
		::System::Boolean IsPromoted; // 0x18
		::Il2CppArray<::RPG::GameCore::ChenLingBattlePresetEnhancementConfig*>* Enhancements; // 0x20
		::System::UInt32 GridIndex; // 0x28
		::System::Single AtkRatio; // 0x2C
		::System::Single HPRatio; // 0x30
		::System::Single MoveSpeedRatio; // 0x34
		::System::Single AttackRangeRatio; // 0x38
		::System::Single AttackCDRatio; // 0x3C
		::System::Single CrtChanceRatio; // 0x40
		::System::Single CrtDamageRatio; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPRESETARMYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E38E352B7C47A557(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePresetArmyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePresetArmyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPRESETARMYCONFIG_METHOD_2_E38E352B7C47A557_OFFSET))(a1, a2);
		}
	};
}
