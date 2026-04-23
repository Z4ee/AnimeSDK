#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLMONSTERCONFIG_METHOD_3_A0C98795CC9D66E5_OFFSET UNITYSDK_OFFSET(0x18D3D670)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLMONSTERCONFIG_METHOD_3_CC58B3C4B21F59DC_OFFSET UNITYSDK_OFFSET(0x18D36320)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLMONSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D362D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnKillMonsterConfig_TypeDefinitionIndex = 16943;

	class RogueModifierExecuteActionOnKillMonsterConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLMONSTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0C98795CC9D66E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnKillMonsterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnKillMonsterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLMONSTERCONFIG_METHOD_3_A0C98795CC9D66E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CC58B3C4B21F59DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnKillMonsterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnKillMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLMONSTERCONFIG_METHOD_3_CC58B3C4B21F59DC_OFFSET))(a1, a2);
		}
	};
}
