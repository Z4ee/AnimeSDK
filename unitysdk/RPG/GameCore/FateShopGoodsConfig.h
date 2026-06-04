#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATESHOPGOODSCONFIG_METHOD_2_8B6A975C0E446D96_OFFSET UNITYSDK_OFFSET(0x19717860)
#define RPG_GAMECORE_FATESHOPGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197178A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateShopGoodsConfig_TypeDefinitionIndex = 18270;

	class FateShopGoodsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATESHOPGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8B6A975C0E446D96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateShopGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateShopGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATESHOPGOODSCONFIG_METHOD_2_8B6A975C0E446D96_OFFSET))(a1, a2);
		}
	};
}
