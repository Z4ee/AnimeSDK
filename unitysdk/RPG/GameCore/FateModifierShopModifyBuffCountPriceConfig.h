#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_METHOD_3_2A7AB932F38DFCA5_OFFSET UNITYSDK_OFFSET(0x1C075520)
#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_METHOD_3_FEBD683F63DEE041_OFFSET UNITYSDK_OFFSET(0x1C0754D0)
#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C075510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierShopModifyBuffCountPriceConfig_TypeDefinitionIndex = 18510;

	class FateModifierShopModifyBuffCountPriceConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FEBD683F63DEE041(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierShopModifyBuffCountPriceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierShopModifyBuffCountPriceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_METHOD_3_FEBD683F63DEE041_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A7AB932F38DFCA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierShopModifyBuffCountPriceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierShopModifyBuffCountPriceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_METHOD_3_2A7AB932F38DFCA5_OFFSET))(a1, a2);
		}
	};
}
