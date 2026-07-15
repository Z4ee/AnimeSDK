#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTTAGTARGETSELECTORCONFIG_METHOD_3_3A9DFDBBC819ED92_OFFSET UNITYSDK_OFFSET(0x1B094C70)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTTAGTARGETSELECTORCONFIG_METHOD_3_E748AF28DC46B090_OFFSET UNITYSDK_OFFSET(0x1B094C10)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTTAGTARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B094C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEquipmentTagTargetSelectorConfig_TypeDefinitionIndex = 20579;

	class LittleGameAbilityPixAirEquipmentTagTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::PixAirEquipTag Tag; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTTAGTARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E748AF28DC46B090(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentTagTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentTagTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTTAGTARGETSELECTORCONFIG_METHOD_3_E748AF28DC46B090_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A9DFDBBC819ED92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentTagTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentTagTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTTAGTARGETSELECTORCONFIG_METHOD_3_3A9DFDBBC819ED92_OFFSET))(a1, a2);
		}
	};
}
