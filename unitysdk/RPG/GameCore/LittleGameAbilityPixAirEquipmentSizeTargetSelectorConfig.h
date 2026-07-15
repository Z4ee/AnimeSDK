#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTSIZETARGETSELECTORCONFIG_METHOD_3_094938F9734B9D51_OFFSET UNITYSDK_OFFSET(0x1B094B70)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTSIZETARGETSELECTORCONFIG_METHOD_3_AB24F3BF33008033_OFFSET UNITYSDK_OFFSET(0x1B094B10)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTSIZETARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B094B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig_TypeDefinitionIndex = 20580;

	class LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::PixAirSlotType Size; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTSIZETARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB24F3BF33008033(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTSIZETARGETSELECTORCONFIG_METHOD_3_AB24F3BF33008033_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_094938F9734B9D51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTSIZETARGETSELECTORCONFIG_METHOD_3_094938F9734B9D51_OFFSET))(a1, a2);
		}
	};
}
