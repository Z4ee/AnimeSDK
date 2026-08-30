#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_METHOD_3_66C286E798AC97E4_OFFSET UNITYSDK_OFFSET(0x1EEFA460)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_METHOD_3_9FD492F0305382A8_OFFSET UNITYSDK_OFFSET(0x1EEFA410)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFA450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBattleGainCoinConfig_TypeDefinitionIndex = 17751;

	class RogueModifierModifyBattleGainCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9FD492F0305382A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBattleGainCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBattleGainCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_METHOD_3_9FD492F0305382A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_66C286E798AC97E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBattleGainCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBattleGainCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_METHOD_3_66C286E798AC97E4_OFFSET))(a1, a2);
		}
	};
}
