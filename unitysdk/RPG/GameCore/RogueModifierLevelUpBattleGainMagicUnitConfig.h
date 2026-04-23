#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPBATTLEGAINMAGICUNITCONFIG_METHOD_3_3A3BA23DF192BB89_OFFSET UNITYSDK_OFFSET(0x18D3F680)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPBATTLEGAINMAGICUNITCONFIG_METHOD_3_BA5C8C8E652C5FB0_OFFSET UNITYSDK_OFFSET(0x18D3F5B0)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPBATTLEGAINMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3F630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierLevelUpBattleGainMagicUnitConfig_TypeDefinitionIndex = 16837;

	class RogueModifierLevelUpBattleGainMagicUnitConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPBATTLEGAINMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BA5C8C8E652C5FB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierLevelUpBattleGainMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierLevelUpBattleGainMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPBATTLEGAINMAGICUNITCONFIG_METHOD_3_BA5C8C8E652C5FB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A3BA23DF192BB89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierLevelUpBattleGainMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierLevelUpBattleGainMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPBATTLEGAINMAGICUNITCONFIG_METHOD_3_3A3BA23DF192BB89_OFFSET))(a1, a2);
		}
	};
}
