#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASERTARGETCONFIG_METHOD_3_0D690C86F78CFD16_OFFSET UNITYSDK_OFFSET(0x1DD646A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASERTARGETCONFIG_METHOD_3_BED8C940652C9487_OFFSET UNITYSDK_OFFSET(0x1DD64600)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASERTARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD64690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorLaserTargetConfig_TypeDefinitionIndex = 21127;

	class LittleGameAbilityTargetSelectorLaserTargetConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASERTARGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BED8C940652C9487(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorLaserTargetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorLaserTargetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASERTARGETCONFIG_METHOD_3_BED8C940652C9487_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D690C86F78CFD16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorLaserTargetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorLaserTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASERTARGETCONFIG_METHOD_3_0D690C86F78CFD16_OFFSET))(a1, a2);
		}
	};
}
