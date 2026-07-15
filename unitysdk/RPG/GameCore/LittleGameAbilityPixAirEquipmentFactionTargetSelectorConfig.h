#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/LittleGamePixAirEquipmentFaction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTFACTIONTARGETSELECTORCONFIG_METHOD_3_B2BED04BB56484D7_OFFSET UNITYSDK_OFFSET(0x1B0948A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTFACTIONTARGETSELECTORCONFIG_METHOD_3_E3D7BDC873F95E97_OFFSET UNITYSDK_OFFSET(0x1B094840)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTFACTIONTARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B094890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig_TypeDefinitionIndex = 20578;

	class LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::LittleGamePixAirEquipmentFaction Faction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTFACTIONTARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E3D7BDC873F95E97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTFACTIONTARGETSELECTORCONFIG_METHOD_3_E3D7BDC873F95E97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2BED04BB56484D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTFACTIONTARGETSELECTORCONFIG_METHOD_3_B2BED04BB56484D7_OFFSET))(a1, a2);
		}
	};
}
