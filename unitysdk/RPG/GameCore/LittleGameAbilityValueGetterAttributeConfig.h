#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERATTRIBUTECONFIG_METHOD_3_5184CEAED90FECF9_OFFSET UNITYSDK_OFFSET(0x19896D90)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERATTRIBUTECONFIG_METHOD_3_69D585133B82BF57_OFFSET UNITYSDK_OFFSET(0x19896D30)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19896D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityValueGetterAttributeConfig_TypeDefinitionIndex = 20213;

	class LittleGameAbilityValueGetterAttributeConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::RPG::GameCore::LittleGameAbilityAttributeType AttributeType; // 0x10
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69D585133B82BF57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERATTRIBUTECONFIG_METHOD_3_69D585133B82BF57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5184CEAED90FECF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERATTRIBUTECONFIG_METHOD_3_5184CEAED90FECF9_OFFSET))(a1, a2);
		}
	};
}
