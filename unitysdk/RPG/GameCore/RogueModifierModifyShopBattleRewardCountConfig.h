#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPBATTLEREWARDCOUNTCONFIG_METHOD_3_458B3C1588BA1032_OFFSET UNITYSDK_OFFSET(0x1D164770)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPBATTLEREWARDCOUNTCONFIG_METHOD_3_ABAB3CB35BA95F56_OFFSET UNITYSDK_OFFSET(0x1D164720)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPBATTLEREWARDCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D164760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyShopBattleRewardCountConfig_TypeDefinitionIndex = 17036;

	class RogueModifierModifyShopBattleRewardCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPBATTLEREWARDCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ABAB3CB35BA95F56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopBattleRewardCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopBattleRewardCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPBATTLEREWARDCOUNTCONFIG_METHOD_3_ABAB3CB35BA95F56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_458B3C1588BA1032(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopBattleRewardCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopBattleRewardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPBATTLEREWARDCOUNTCONFIG_METHOD_3_458B3C1588BA1032_OFFSET))(a1, a2);
		}
	};
}
