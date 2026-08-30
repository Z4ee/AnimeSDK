#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYATTRIBUTECONFIG_METHOD_2_F561A658A7976590_OFFSET UNITYSDK_OFFSET(0x1DD60A70)
#define RPG_GAMECORE_LITTLEGAMEABILITYATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD60B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityAttributeConfig_TypeDefinitionIndex = 21089;

	class LittleGameAbilityAttributeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameAbilityAttributeType AttributeType; // 0x10
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F561A658A7976590(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYATTRIBUTECONFIG_METHOD_2_F561A658A7976590_OFFSET))(a1, a2);
		}
	};
}
