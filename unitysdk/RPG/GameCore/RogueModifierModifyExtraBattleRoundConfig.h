#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_METHOD_3_37A87A9CC42EB634_OFFSET UNITYSDK_OFFSET(0x176341E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_METHOD_3_BB643CF78C21D77D_OFFSET UNITYSDK_OFFSET(0x17634110)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17634190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyExtraBattleRoundConfig_TypeDefinitionIndex = 16285;

	class RogueModifierModifyExtraBattleRoundConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB643CF78C21D77D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyExtraBattleRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyExtraBattleRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_METHOD_3_BB643CF78C21D77D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37A87A9CC42EB634(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyExtraBattleRoundConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyExtraBattleRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_METHOD_3_37A87A9CC42EB634_OFFSET))(a1, a2);
		}
	};
}
