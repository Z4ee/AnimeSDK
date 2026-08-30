#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREFUNDCOINONROGUESHOPCONFIG_METHOD_3_4868119FF1E010C4_OFFSET UNITYSDK_OFFSET(0x1D3FBA60)
#define RPG_GAMECORE_ROGUEMODIFIERREFUNDCOINONROGUESHOPCONFIG_METHOD_3_747F0A49EE659D80_OFFSET UNITYSDK_OFFSET(0x1D3FBAB0)
#define RPG_GAMECORE_ROGUEMODIFIERREFUNDCOINONROGUESHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FBAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierRefundCoinOnRogueShopConfig_TypeDefinitionIndex = 17784;

	class RogueModifierRefundCoinOnRogueShopConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFUNDCOINONROGUESHOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4868119FF1E010C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRefundCoinOnRogueShopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRefundCoinOnRogueShopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFUNDCOINONROGUESHOPCONFIG_METHOD_3_4868119FF1E010C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_747F0A49EE659D80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRefundCoinOnRogueShopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRefundCoinOnRogueShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFUNDCOINONROGUESHOPCONFIG_METHOD_3_747F0A49EE659D80_OFFSET))(a1, a2);
		}
	};
}
