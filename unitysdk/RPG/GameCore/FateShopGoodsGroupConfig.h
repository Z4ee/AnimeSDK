#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATESHOPGOODSGROUPCONFIG_METHOD_2_003AB6C9919F2EA1_OFFSET UNITYSDK_OFFSET(0x197178B0)
#define RPG_GAMECORE_FATESHOPGOODSGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197178F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateShopGoodsGroupConfig_TypeDefinitionIndex = 18271;

	class FateShopGoodsGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATESHOPGOODSGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_003AB6C9919F2EA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateShopGoodsGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateShopGoodsGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATESHOPGOODSGROUPCONFIG_METHOD_2_003AB6C9919F2EA1_OFFSET))(a1, a2);
		}
	};
}
