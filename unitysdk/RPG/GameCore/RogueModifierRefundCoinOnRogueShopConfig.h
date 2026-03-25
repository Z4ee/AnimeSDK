#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREFUNDCOINONROGUESHOPCONFIG_METHOD_3_747F0A49EE659D80_OFFSET UNITYSDK_OFFSET(0x17637F20)
#define RPG_GAMECORE_ROGUEMODIFIERREFUNDCOINONROGUESHOPCONFIG_METHOD_3_82C05C7538D305E9_OFFSET UNITYSDK_OFFSET(0x17637E50)
#define RPG_GAMECORE_ROGUEMODIFIERREFUNDCOINONROGUESHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17637ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierRefundCoinOnRogueShopConfig_TypeDefinitionIndex = 16538;

	class RogueModifierRefundCoinOnRogueShopConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFUNDCOINONROGUESHOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_82C05C7538D305E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRefundCoinOnRogueShopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRefundCoinOnRogueShopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFUNDCOINONROGUESHOPCONFIG_METHOD_3_82C05C7538D305E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_747F0A49EE659D80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRefundCoinOnRogueShopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRefundCoinOnRogueShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFUNDCOINONROGUESHOPCONFIG_METHOD_3_747F0A49EE659D80_OFFSET))(a1, a2);
		}
	};
}
