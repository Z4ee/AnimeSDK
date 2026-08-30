#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTCORETARGETSELECTORCONFIG_METHOD_3_3CBB5C5B998B5D9B_OFFSET UNITYSDK_OFFSET(0x1DD63100)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTCORETARGETSELECTORCONFIG_METHOD_3_C95ADABF6E742F0F_OFFSET UNITYSDK_OFFSET(0x1DD63210)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTCORETARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD63200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEquipmentCoreTargetSelectorConfig_TypeDefinitionIndex = 21133;

	class LittleGameAbilityPixAirEquipmentCoreTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Boolean IsCore; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTCORETARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3CBB5C5B998B5D9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentCoreTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentCoreTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTCORETARGETSELECTORCONFIG_METHOD_3_3CBB5C5B998B5D9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C95ADABF6E742F0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentCoreTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentCoreTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTCORETARGETSELECTORCONFIG_METHOD_3_C95ADABF6E742F0F_OFFSET))(a1, a2);
		}
	};
}
