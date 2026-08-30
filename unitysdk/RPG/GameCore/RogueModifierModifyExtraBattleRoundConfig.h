#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_METHOD_3_37A87A9CC42EB634_OFFSET UNITYSDK_OFFSET(0x1D3F9EF0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_METHOD_3_949065FB76EE63B8_OFFSET UNITYSDK_OFFSET(0x1D3F9EA0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F9EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyExtraBattleRoundConfig_TypeDefinitionIndex = 17519;

	class RogueModifierModifyExtraBattleRoundConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_949065FB76EE63B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyExtraBattleRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyExtraBattleRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_METHOD_3_949065FB76EE63B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37A87A9CC42EB634(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyExtraBattleRoundConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyExtraBattleRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_METHOD_3_37A87A9CC42EB634_OFFSET))(a1, a2);
		}
	};
}
