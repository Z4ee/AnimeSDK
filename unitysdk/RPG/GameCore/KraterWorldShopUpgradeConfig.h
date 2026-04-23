#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_KRATERWORLDSHOPUPGRADECONFIG_METHOD_2_81AB38B5B1B79088_OFFSET UNITYSDK_OFFSET(0x18A39AE0)
#define RPG_GAMECORE_KRATERWORLDSHOPUPGRADECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A39BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int KraterWorldShopUpgradeConfig_TypeDefinitionIndex = 15920;

	class KraterWorldShopUpgradeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single DelayTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_KRATERWORLDSHOPUPGRADECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_81AB38B5B1B79088(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::KraterWorldShopUpgradeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::KraterWorldShopUpgradeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_KRATERWORLDSHOPUPGRADECONFIG_METHOD_2_81AB38B5B1B79088_OFFSET))(a1, a2);
		}
	};
}
