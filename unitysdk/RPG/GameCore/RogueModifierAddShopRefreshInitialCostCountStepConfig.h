#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_METHOD_3_70CE4666C60CD172_OFFSET UNITYSDK_OFFSET(0x1D3F6CE0)
#define RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_METHOD_3_8B50CFBD35FC5B96_OFFSET UNITYSDK_OFFSET(0x1D3F6C90)
#define RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F6CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddShopRefreshInitialCostCountStepConfig_TypeDefinitionIndex = 17617;

	class RogueModifierAddShopRefreshInitialCostCountStepConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B50CFBD35FC5B96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddShopRefreshInitialCostCountStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddShopRefreshInitialCostCountStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_METHOD_3_8B50CFBD35FC5B96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_70CE4666C60CD172(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddShopRefreshInitialCostCountStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddShopRefreshInitialCostCountStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_METHOD_3_70CE4666C60CD172_OFFSET))(a1, a2);
		}
	};
}
