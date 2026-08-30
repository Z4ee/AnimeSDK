#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/RPG/GameCore/LittleGameValueCompareType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORFILTERBYATTRIBUTECONFIG_METHOD_3_700B59E31F8900F6_OFFSET UNITYSDK_OFFSET(0x1DD64330)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORFILTERBYATTRIBUTECONFIG_METHOD_3_B7793F5BB23DFB7C_OFFSET UNITYSDK_OFFSET(0x1DD642D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORFILTERBYATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD64320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorFilterByAttributeConfig_TypeDefinitionIndex = 21135;

	class LittleGameAbilityTargetSelectorFilterByAttributeConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* Source; // 0x10
		::RPG::GameCore::LittleGameAbilityAttributeType AttributeType; // 0x18
		::RPG::GameCore::LittleGameValueCompareType CompareType; // 0x1C
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* CompareValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORFILTERBYATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7793F5BB23DFB7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorFilterByAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorFilterByAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORFILTERBYATTRIBUTECONFIG_METHOD_3_B7793F5BB23DFB7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_700B59E31F8900F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorFilterByAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorFilterByAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORFILTERBYATTRIBUTECONFIG_METHOD_3_700B59E31F8900F6_OFFSET))(a1, a2);
		}
	};
}
