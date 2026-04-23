#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_METHOD_3_70CE4666C60CD172_OFFSET UNITYSDK_OFFSET(0x18D2A9A0)
#define RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_METHOD_3_DF0494A4D5F51EFB_OFFSET UNITYSDK_OFFSET(0x18D2A8D0)
#define RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D2A950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddShopRefreshInitialCostCountStepConfig_TypeDefinitionIndex = 16926;

	class RogueModifierAddShopRefreshInitialCostCountStepConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DF0494A4D5F51EFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddShopRefreshInitialCostCountStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddShopRefreshInitialCostCountStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_METHOD_3_DF0494A4D5F51EFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_70CE4666C60CD172(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddShopRefreshInitialCostCountStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddShopRefreshInitialCostCountStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_METHOD_3_70CE4666C60CD172_OFFSET))(a1, a2);
		}
	};
}
