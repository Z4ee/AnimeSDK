#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_METHOD_3_7D892F191F01F94C_OFFSET UNITYSDK_OFFSET(0x1D3FAB00)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_METHOD_3_F23BA1BB9CB712C8_OFFSET UNITYSDK_OFFSET(0x1D3FAB50)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FAB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyShopGoodCostConfig_TypeDefinitionIndex = 17755;

	class RogueModifierModifyShopGoodCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7D892F191F01F94C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopGoodCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopGoodCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_METHOD_3_7D892F191F01F94C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F23BA1BB9CB712C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopGoodCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopGoodCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_METHOD_3_F23BA1BB9CB712C8_OFFSET))(a1, a2);
		}
	};
}
