#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITBONUSPERFECTCLEARRATIOCONFIG_METHOD_3_81B88EFF1FA8A144_OFFSET UNITYSDK_OFFSET(0x1D06A5C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITBONUSPERFECTCLEARRATIOCONFIG_METHOD_3_ADCF87A91C2E2E00_OFFSET UNITYSDK_OFFSET(0x1D06A610)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITBONUSPERFECTCLEARRATIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06A600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierOverrideTraitBonusPerfectClearRatioConfig_TypeDefinitionIndex = 18701;

	class GridFightModifierOverrideTraitBonusPerfectClearRatioConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITBONUSPERFECTCLEARRATIOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_81B88EFF1FA8A144(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierOverrideTraitBonusPerfectClearRatioConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierOverrideTraitBonusPerfectClearRatioConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITBONUSPERFECTCLEARRATIOCONFIG_METHOD_3_81B88EFF1FA8A144_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ADCF87A91C2E2E00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierOverrideTraitBonusPerfectClearRatioConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierOverrideTraitBonusPerfectClearRatioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITBONUSPERFECTCLEARRATIOCONFIG_METHOD_3_ADCF87A91C2E2E00_OFFSET))(a1, a2);
		}
	};
}
