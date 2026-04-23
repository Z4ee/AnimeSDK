#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_METHOD_6_71C5B6BD601F20F7_OFFSET UNITYSDK_OFFSET(0x188CE720)
#define RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_METHOD_6_C13BA5DE5D010694_OFFSET UNITYSDK_OFFSET(0x188CE890)
#define RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188CE7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddShopBonusGoodsConfig_TypeDefinitionIndex = 18279;

	class FateActAddShopBonusGoodsConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_71C5B6BD601F20F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddShopBonusGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddShopBonusGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_METHOD_6_71C5B6BD601F20F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C13BA5DE5D010694(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddShopBonusGoodsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddShopBonusGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_METHOD_6_C13BA5DE5D010694_OFFSET))(a1, a2);
		}
	};
}
