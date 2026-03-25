#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOSTCONFIG_METHOD_3_5D71A0217AAD4C1C_OFFSET UNITYSDK_OFFSET(0x17636160)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOSTCONFIG_METHOD_3_78FBFFD8B7D22925_OFFSET UNITYSDK_OFFSET(0x17636090)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17636110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyShopRefreshCostConfig_TypeDefinitionIndex = 16304;

	class RogueModifierModifyShopRefreshCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_78FBFFD8B7D22925(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopRefreshCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopRefreshCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOSTCONFIG_METHOD_3_78FBFFD8B7D22925_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5D71A0217AAD4C1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopRefreshCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopRefreshCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOSTCONFIG_METHOD_3_5D71A0217AAD4C1C_OFFSET))(a1, a2);
		}
	};
}
