#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTRELATIVEINDEXTARGETSELECTORCONFIG_METHOD_3_33C5801ABFD9B11A_OFFSET UNITYSDK_OFFSET(0x19894F10)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTRELATIVEINDEXTARGETSELECTORCONFIG_METHOD_3_FEDEB80E227D3C7A_OFFSET UNITYSDK_OFFSET(0x19894F70)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTRELATIVEINDEXTARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19894F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEquipmentRelativeIndexTargetSelectorConfig_TypeDefinitionIndex = 20203;

	class LittleGameAbilityPixAirEquipmentRelativeIndexTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Int32 FromOffset; // 0x10
		::System::Int32 ToOffset; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTRELATIVEINDEXTARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_33C5801ABFD9B11A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentRelativeIndexTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentRelativeIndexTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTRELATIVEINDEXTARGETSELECTORCONFIG_METHOD_3_33C5801ABFD9B11A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FEDEB80E227D3C7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentRelativeIndexTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentRelativeIndexTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTRELATIVEINDEXTARGETSELECTORCONFIG_METHOD_3_FEDEB80E227D3C7A_OFFSET))(a1, a2);
		}
	};
}
