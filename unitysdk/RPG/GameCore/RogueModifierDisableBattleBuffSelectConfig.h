#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERDISABLEBATTLEBUFFSELECTCONFIG_METHOD_3_04F3E41729284CE3_OFFSET UNITYSDK_OFFSET(0x1CFBF600)
#define RPG_GAMECORE_ROGUEMODIFIERDISABLEBATTLEBUFFSELECTCONFIG_METHOD_3_814871353FF35C67_OFFSET UNITYSDK_OFFSET(0x1CFBF650)
#define RPG_GAMECORE_ROGUEMODIFIERDISABLEBATTLEBUFFSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBF640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierDisableBattleBuffSelectConfig_TypeDefinitionIndex = 17227;

	class RogueModifierDisableBattleBuffSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDISABLEBATTLEBUFFSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04F3E41729284CE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierDisableBattleBuffSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierDisableBattleBuffSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDISABLEBATTLEBUFFSELECTCONFIG_METHOD_3_04F3E41729284CE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_814871353FF35C67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierDisableBattleBuffSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierDisableBattleBuffSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDISABLEBATTLEBUFFSELECTCONFIG_METHOD_3_814871353FF35C67_OFFSET))(a1, a2);
		}
	};
}
