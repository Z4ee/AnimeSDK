#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATESHOPGOODSGROUPLISTCONFIG_METHOD_2_D97E7242013F049D_OFFSET UNITYSDK_OFFSET(0x188DB400)
#define RPG_GAMECORE_FATESHOPGOODSGROUPLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188DB440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateShopGoodsGroupListConfig_TypeDefinitionIndex = 18300;

	class FateShopGoodsGroupListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATESHOPGOODSGROUPLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D97E7242013F049D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateShopGoodsGroupListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateShopGoodsGroupListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATESHOPGOODSGROUPLISTCONFIG_METHOD_2_D97E7242013F049D_OFFSET))(a1, a2);
		}
	};
}
