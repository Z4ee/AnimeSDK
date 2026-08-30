#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRONESIDEEQUIPMENTTARGETSELECTORCONFIG_METHOD_3_8AE2CA9A67564347_OFFSET UNITYSDK_OFFSET(0x1DD63D00)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRONESIDEEQUIPMENTTARGETSELECTORCONFIG_METHOD_3_A3647279316AA5B3_OFFSET UNITYSDK_OFFSET(0x1DD63BF0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRONESIDEEQUIPMENTTARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD63CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig_TypeDefinitionIndex = 21134;

	class LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Boolean IsAlly; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRONESIDEEQUIPMENTTARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A3647279316AA5B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRONESIDEEQUIPMENTTARGETSELECTORCONFIG_METHOD_3_A3647279316AA5B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8AE2CA9A67564347(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRONESIDEEQUIPMENTTARGETSELECTORCONFIG_METHOD_3_8AE2CA9A67564347_OFFSET))(a1, a2);
		}
	};
}
