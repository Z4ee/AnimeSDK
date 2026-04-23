#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_METHOD_3_DF40D3194D43FE31_OFFSET UNITYSDK_OFFSET(0x18D42940)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_METHOD_3_F23BA1BB9CB712C8_OFFSET UNITYSDK_OFFSET(0x18D42A10)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D429C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyShopGoodCostConfig_TypeDefinitionIndex = 17063;

	class RogueModifierModifyShopGoodCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DF40D3194D43FE31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopGoodCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopGoodCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_METHOD_3_DF40D3194D43FE31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F23BA1BB9CB712C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopGoodCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopGoodCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_METHOD_3_F23BA1BB9CB712C8_OFFSET))(a1, a2);
		}
	};
}
