#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_METHOD_6_F7749FC5E872364B_OFFSET UNITYSDK_OFFSET(0x1E0CC0D0)
#define RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_METHOD_6_FF847D18130BF7A7_OFFSET UNITYSDK_OFFSET(0x1E0CC080)
#define RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddShopFreeRefreshCountByParamConfig_TypeDefinitionIndex = 18995;

	class FateActAddShopFreeRefreshCountByParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_FF847D18130BF7A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_METHOD_6_FF847D18130BF7A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F7749FC5E872364B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_METHOD_6_F7749FC5E872364B_OFFSET))(a1, a2);
		}
	};
}
