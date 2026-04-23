#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_METHOD_6_67EC39212D10E020_OFFSET UNITYSDK_OFFSET(0x188CE8A0)
#define RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_METHOD_6_F7749FC5E872364B_OFFSET UNITYSDK_OFFSET(0x188CEA10)
#define RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188CE970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddShopFreeRefreshCountByParamConfig_TypeDefinitionIndex = 18263;

	class FateActAddShopFreeRefreshCountByParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_67EC39212D10E020(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_METHOD_6_67EC39212D10E020_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F7749FC5E872364B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_METHOD_6_F7749FC5E872364B_OFFSET))(a1, a2);
		}
	};
}
