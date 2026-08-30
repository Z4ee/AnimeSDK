#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTOREXCLUDECONFIG_METHOD_3_5D5B0C415C8A3D84_OFFSET UNITYSDK_OFFSET(0x1D1FC020)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTOREXCLUDECONFIG_METHOD_3_5ECA827ECCC7395E_OFFSET UNITYSDK_OFFSET(0x1D1FBFC0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTOREXCLUDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FC010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorExcludeConfig_TypeDefinitionIndex = 21124;

	class LittleGameAbilityTargetSelectorExcludeConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* From; // 0x10
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* Exclude; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTOREXCLUDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5ECA827ECCC7395E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTOREXCLUDECONFIG_METHOD_3_5ECA827ECCC7395E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5D5B0C415C8A3D84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTOREXCLUDECONFIG_METHOD_3_5D5B0C415C8A3D84_OFFSET))(a1, a2);
		}
	};
}
