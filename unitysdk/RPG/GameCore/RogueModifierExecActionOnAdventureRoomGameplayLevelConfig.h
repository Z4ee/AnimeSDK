#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONADVENTUREROOMGAMEPLAYLEVELCONFIG_METHOD_3_969636B6CE1A8F7E_OFFSET UNITYSDK_OFFSET(0x18D3C370)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONADVENTUREROOMGAMEPLAYLEVELCONFIG_METHOD_3_E372FEA59D1DCB77_OFFSET UNITYSDK_OFFSET(0x18D341E0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONADVENTUREROOMGAMEPLAYLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D34190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecActionOnAdventureRoomGameplayLevelConfig_TypeDefinitionIndex = 16935;

	class RogueModifierExecActionOnAdventureRoomGameplayLevelConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONADVENTUREROOMGAMEPLAYLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_969636B6CE1A8F7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecActionOnAdventureRoomGameplayLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecActionOnAdventureRoomGameplayLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONADVENTUREROOMGAMEPLAYLEVELCONFIG_METHOD_3_969636B6CE1A8F7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E372FEA59D1DCB77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecActionOnAdventureRoomGameplayLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecActionOnAdventureRoomGameplayLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONADVENTUREROOMGAMEPLAYLEVELCONFIG_METHOD_3_E372FEA59D1DCB77_OFFSET))(a1, a2);
		}
	};
}
