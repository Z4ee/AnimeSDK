#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_METHOD_3_5E78E2AD4CD3A575_OFFSET UNITYSDK_OFFSET(0x189BCE00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_METHOD_3_720B9B9F45E3AAAC_OFFSET UNITYSDK_OFFSET(0x189BCED0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BCE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceInitialSupplyBonusIdConfig_TypeDefinitionIndex = 18405;

	class GridFightModifierForceInitialSupplyBonusIdConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5E78E2AD4CD3A575(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForceInitialSupplyBonusIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForceInitialSupplyBonusIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_METHOD_3_5E78E2AD4CD3A575_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_720B9B9F45E3AAAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForceInitialSupplyBonusIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForceInitialSupplyBonusIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_METHOD_3_720B9B9F45E3AAAC_OFFSET))(a1, a2);
		}
	};
}
