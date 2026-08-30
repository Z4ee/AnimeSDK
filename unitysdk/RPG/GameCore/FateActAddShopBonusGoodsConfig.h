#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_METHOD_6_08504A93FC67F298_OFFSET UNITYSDK_OFFSET(0x1E0CC020)
#define RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_METHOD_6_C13BA5DE5D010694_OFFSET UNITYSDK_OFFSET(0x1E0CC070)
#define RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddShopBonusGoodsConfig_TypeDefinitionIndex = 19011;

	class FateActAddShopBonusGoodsConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_08504A93FC67F298(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddShopBonusGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddShopBonusGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_METHOD_6_08504A93FC67F298_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C13BA5DE5D010694(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddShopBonusGoodsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddShopBonusGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_METHOD_6_C13BA5DE5D010694_OFFSET))(a1, a2);
		}
	};
}
