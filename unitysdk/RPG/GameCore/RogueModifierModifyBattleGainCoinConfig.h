#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_METHOD_3_66C286E798AC97E4_OFFSET UNITYSDK_OFFSET(0x17633570)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_METHOD_3_BB10F73D82560BED_OFFSET UNITYSDK_OFFSET(0x176334A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17633520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBattleGainCoinConfig_TypeDefinitionIndex = 16506;

	class RogueModifierModifyBattleGainCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB10F73D82560BED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBattleGainCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBattleGainCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_METHOD_3_BB10F73D82560BED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_66C286E798AC97E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBattleGainCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBattleGainCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_METHOD_3_66C286E798AC97E4_OFFSET))(a1, a2);
		}
	};
}
