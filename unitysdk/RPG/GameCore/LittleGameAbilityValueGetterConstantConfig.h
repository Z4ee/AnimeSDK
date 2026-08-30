#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONSTANTCONFIG_METHOD_3_8837216425070D05_OFFSET UNITYSDK_OFFSET(0x1DD66570)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONSTANTCONFIG_METHOD_3_FEA2F3A81F9FA961_OFFSET UNITYSDK_OFFSET(0x1DD66690)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONSTANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD66680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityValueGetterConstantConfig_TypeDefinitionIndex = 21138;

	class LittleGameAbilityValueGetterConstantConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONSTANTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8837216425070D05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterConstantConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterConstantConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONSTANTCONFIG_METHOD_3_8837216425070D05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FEA2F3A81F9FA961(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterConstantConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterConstantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONSTANTCONFIG_METHOD_3_FEA2F3A81F9FA961_OFFSET))(a1, a2);
		}
	};
}
