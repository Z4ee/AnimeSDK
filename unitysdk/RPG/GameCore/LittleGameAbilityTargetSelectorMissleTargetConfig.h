#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORMISSLETARGETCONFIG_METHOD_3_3CEDABD6AD3F514A_OFFSET UNITYSDK_OFFSET(0x198964A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORMISSLETARGETCONFIG_METHOD_3_B4399EFC85A9F7AB_OFFSET UNITYSDK_OFFSET(0x19896400)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORMISSLETARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19896490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorMissleTargetConfig_TypeDefinitionIndex = 20200;

	class LittleGameAbilityTargetSelectorMissleTargetConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORMISSLETARGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B4399EFC85A9F7AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorMissleTargetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorMissleTargetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORMISSLETARGETCONFIG_METHOD_3_B4399EFC85A9F7AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3CEDABD6AD3F514A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorMissleTargetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorMissleTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORMISSLETARGETCONFIG_METHOD_3_3CEDABD6AD3F514A_OFFSET))(a1, a2);
		}
	};
}
