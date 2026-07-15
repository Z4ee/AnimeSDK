#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONASTYLEBATTLEPASSIVECONFIG_METHOD_3_38AEEEDB4F24BD34_OFFSET UNITYSDK_OFFSET(0x1D165490)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONASTYLEBATTLEPASSIVECONFIG_METHOD_3_9596DA3A01E46AB8_OFFSET UNITYSDK_OFFSET(0x1D165440)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONASTYLEBATTLEPASSIVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D165480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaStyleBattlePassiveConfig_TypeDefinitionIndex = 17048;

	class RogueModifierPersonaStyleBattlePassiveConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONASTYLEBATTLEPASSIVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9596DA3A01E46AB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaStyleBattlePassiveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaStyleBattlePassiveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONASTYLEBATTLEPASSIVECONFIG_METHOD_3_9596DA3A01E46AB8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38AEEEDB4F24BD34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaStyleBattlePassiveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaStyleBattlePassiveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONASTYLEBATTLEPASSIVECONFIG_METHOD_3_38AEEEDB4F24BD34_OFFSET))(a1, a2);
		}
	};
}
