#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYANCIENTCOINSELLREVENUECONFIG_METHOD_3_4DD681418B03B1F7_OFFSET UNITYSDK_OFFSET(0x1EEFA3A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYANCIENTCOINSELLREVENUECONFIG_METHOD_3_CEEE6FE7EE3D4FB3_OFFSET UNITYSDK_OFFSET(0x1EEFA350)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYANCIENTCOINSELLREVENUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFA390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyAncientCoinSellRevenueConfig_TypeDefinitionIndex = 17596;

	class RogueModifierModifyAncientCoinSellRevenueConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYANCIENTCOINSELLREVENUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CEEE6FE7EE3D4FB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyAncientCoinSellRevenueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyAncientCoinSellRevenueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYANCIENTCOINSELLREVENUECONFIG_METHOD_3_CEEE6FE7EE3D4FB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4DD681418B03B1F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyAncientCoinSellRevenueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyAncientCoinSellRevenueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYANCIENTCOINSELLREVENUECONFIG_METHOD_3_4DD681418B03B1F7_OFFSET))(a1, a2);
		}
	};
}
