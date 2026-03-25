#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_METHOD_3_2A7AB932F38DFCA5_OFFSET UNITYSDK_OFFSET(0x171C8420)
#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_METHOD_3_88B22795B96D308C_OFFSET UNITYSDK_OFFSET(0x171C9100)
#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C83D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierShopModifyBuffCountPriceConfig_TypeDefinitionIndex = 17690;

	class FateModifierShopModifyBuffCountPriceConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_88B22795B96D308C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierShopModifyBuffCountPriceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierShopModifyBuffCountPriceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_METHOD_3_88B22795B96D308C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A7AB932F38DFCA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierShopModifyBuffCountPriceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierShopModifyBuffCountPriceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_METHOD_3_2A7AB932F38DFCA5_OFFSET))(a1, a2);
		}
	};
}
