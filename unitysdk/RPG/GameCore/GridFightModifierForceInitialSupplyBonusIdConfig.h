#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_METHOD_3_720B9B9F45E3AAAC_OFFSET UNITYSDK_OFFSET(0x1EE6DDC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_METHOD_3_E2F9F405990584B0_OFFSET UNITYSDK_OFFSET(0x1EE6DD70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6DDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceInitialSupplyBonusIdConfig_TypeDefinitionIndex = 19147;

	class GridFightModifierForceInitialSupplyBonusIdConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2F9F405990584B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForceInitialSupplyBonusIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForceInitialSupplyBonusIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_METHOD_3_E2F9F405990584B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_720B9B9F45E3AAAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForceInitialSupplyBonusIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForceInitialSupplyBonusIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_METHOD_3_720B9B9F45E3AAAC_OFFSET))(a1, a2);
		}
	};
}
