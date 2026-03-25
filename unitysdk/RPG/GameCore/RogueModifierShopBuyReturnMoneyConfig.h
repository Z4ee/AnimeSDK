#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSHOPBUYRETURNMONEYCONFIG_METHOD_3_36689C4D784A55D1_OFFSET UNITYSDK_OFFSET(0x17639A30)
#define RPG_GAMECORE_ROGUEMODIFIERSHOPBUYRETURNMONEYCONFIG_METHOD_3_8E9891BDCB1D04E8_OFFSET UNITYSDK_OFFSET(0x1762D730)
#define RPG_GAMECORE_ROGUEMODIFIERSHOPBUYRETURNMONEYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762D6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierShopBuyReturnMoneyConfig_TypeDefinitionIndex = 16536;

	class RogueModifierShopBuyReturnMoneyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSHOPBUYRETURNMONEYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_36689C4D784A55D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierShopBuyReturnMoneyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierShopBuyReturnMoneyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSHOPBUYRETURNMONEYCONFIG_METHOD_3_36689C4D784A55D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E9891BDCB1D04E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierShopBuyReturnMoneyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierShopBuyReturnMoneyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSHOPBUYRETURNMONEYCONFIG_METHOD_3_8E9891BDCB1D04E8_OFFSET))(a1, a2);
		}
	};
}
