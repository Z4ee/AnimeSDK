#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERSUMATTRIBUTECONFIG_METHOD_3_52F8F9B9B70092A4_OFFSET UNITYSDK_OFFSET(0x1BCBD940)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERSUMATTRIBUTECONFIG_METHOD_3_A767991C8A8542C2_OFFSET UNITYSDK_OFFSET(0x1BCBD8E0)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERSUMATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCBD930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityValueGetterSumAttributeConfig_TypeDefinitionIndex = 20588;

	class LittleGameAbilityValueGetterSumAttributeConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::RPG::GameCore::LittleGameAbilityAttributeType AttributeType; // 0x10
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERSUMATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A767991C8A8542C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterSumAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterSumAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERSUMATTRIBUTECONFIG_METHOD_3_A767991C8A8542C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_52F8F9B9B70092A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterSumAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterSumAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERSUMATTRIBUTECONFIG_METHOD_3_52F8F9B9B70092A4_OFFSET))(a1, a2);
		}
	};
}
