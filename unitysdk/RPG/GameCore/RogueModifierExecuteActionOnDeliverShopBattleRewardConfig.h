#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELIVERSHOPBATTLEREWARDCONFIG_METHOD_3_4CE8E75077B3279A_OFFSET UNITYSDK_OFFSET(0x1762FBF0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELIVERSHOPBATTLEREWARDCONFIG_METHOD_3_5F6023A246D727E3_OFFSET UNITYSDK_OFFSET(0x1762FB20)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELIVERSHOPBATTLEREWARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762FBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnDeliverShopBattleRewardConfig_TypeDefinitionIndex = 16242;

	class RogueModifierExecuteActionOnDeliverShopBattleRewardConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELIVERSHOPBATTLEREWARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5F6023A246D727E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDeliverShopBattleRewardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnDeliverShopBattleRewardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELIVERSHOPBATTLEREWARDCONFIG_METHOD_3_5F6023A246D727E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4CE8E75077B3279A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDeliverShopBattleRewardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnDeliverShopBattleRewardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELIVERSHOPBATTLEREWARDCONFIG_METHOD_3_4CE8E75077B3279A_OFFSET))(a1, a2);
		}
	};
}
