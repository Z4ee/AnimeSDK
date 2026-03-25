#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITBONUSPERFECTCLEARRATIOCONFIG_METHOD_3_ADCF87A91C2E2E00_OFFSET UNITYSDK_OFFSET(0x17268520)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITBONUSPERFECTCLEARRATIOCONFIG_METHOD_3_BC10D9D4669B9669_OFFSET UNITYSDK_OFFSET(0x1726B840)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITBONUSPERFECTCLEARRATIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172684D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierOverrideTraitBonusPerfectClearRatioConfig_TypeDefinitionIndex = 17858;

	class GridFightModifierOverrideTraitBonusPerfectClearRatioConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITBONUSPERFECTCLEARRATIOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC10D9D4669B9669(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierOverrideTraitBonusPerfectClearRatioConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierOverrideTraitBonusPerfectClearRatioConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITBONUSPERFECTCLEARRATIOCONFIG_METHOD_3_BC10D9D4669B9669_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ADCF87A91C2E2E00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierOverrideTraitBonusPerfectClearRatioConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierOverrideTraitBonusPerfectClearRatioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITBONUSPERFECTCLEARRATIOCONFIG_METHOD_3_ADCF87A91C2E2E00_OFFSET))(a1, a2);
		}
	};
}
