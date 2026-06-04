#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASTATTACKERCONFIG_METHOD_3_94FE64EB494A6E2C_OFFSET UNITYSDK_OFFSET(0x19896300)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASTATTACKERCONFIG_METHOD_3_F84CAD4A3A927841_OFFSET UNITYSDK_OFFSET(0x198963A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASTATTACKERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19896390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorLastAttackerConfig_TypeDefinitionIndex = 20199;

	class LittleGameAbilityTargetSelectorLastAttackerConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASTATTACKERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94FE64EB494A6E2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorLastAttackerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorLastAttackerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASTATTACKERCONFIG_METHOD_3_94FE64EB494A6E2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F84CAD4A3A927841(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorLastAttackerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorLastAttackerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASTATTACKERCONFIG_METHOD_3_F84CAD4A3A927841_OFFSET))(a1, a2);
		}
	};
}
